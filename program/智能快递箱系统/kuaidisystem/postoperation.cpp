#include "postoperation.h"
#include "ui_postoperation.h"

#include "mainwindow.h"
#include "postinput.h"
#include "postsearch.h"

#include <QString>
#include <QHostAddress>
#include <QFile>
#include <QDir>
#include <QMessageBox>

postoperation::postoperation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::postoperation)
{
    ui->setupUi(this);

    //
    ui->pbPost->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pbSearch->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pbReturn->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pbsendfile->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点

    //IP
    localIpStr = getIp();
    ui->label_ipaddress->setText(localIpStr);

    //
    loadSize = 4*1024;
    totalBytes = 0;
    bytesWritten = 0;
    bytesToWrite = 0;
    tcpClient = new QTcpSocket(this);
    connect(tcpClient,SIGNAL(connected()),this,SLOT(startTransfer()));
    //当连接服务器成功时，发出connected()信号，我们开始传送文件
    connect(tcpClient,SIGNAL(bytesWritten(qint64)),this,SLOT(updateClientProgress(qint64)));
    //当有数据发送成功时，我们更新进度条
    connect(tcpClient,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(displayError(QAbstractSocket::SocketError)));

}

postoperation::~postoperation()
{
    delete ui;
}

void postoperation::on_pbReturn_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    MainWindow *po =new MainWindow(this);
    po->show();
}

void postoperation::on_pbPost_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    postinput *pi =new postinput(this);
    pi->show();
}

void postoperation::on_pbSearch_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    postsearch *ps=new postsearch(this);
    ps->show();
}

QString postoperation::getIp()
{
    QString myipv4Address;
//    QHostInfo vHostInfo = QHostInfo::fromName(QHostInfo::localHostName());
//    QList<QHostAddress> vAddressList = vHostInfo.addresses();
    QList<QHostAddress> vAddressList = QNetworkInterface::allAddresses();
    for(int i = 0; i < vAddressList.size(); i++)
    {
        if(!vAddressList.at(i).isNull() &&
                vAddressList.at(i) != QHostAddress::LocalHost &&
                vAddressList.at(i).protocol() ==  QAbstractSocket::IPv4Protocol)
        {
            myipv4Address = vAddressList.at(i).toString();
            break;
        }
    }
    return myipv4Address;
}

void postoperation::send()   //连接到服务器，执行发送
{
    ui->pbsendfile->setEnabled(false);
    bytesWritten = 0;
    //初始化已发送字节为0

    QDir dir;
    QString path = dir.currentPath();
    path += "/setting";
    QDir dir2(path);
    QString settingname;
    if(dir2.exists())
    {
        dir2.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
        dir2.setSorting(QDir::Size | QDir::Reversed);
        QFileInfoList list = dir2.entryInfoList();
        QFileInfo fileInfo = list.at(0);
        settingname = fileInfo.fileName();
        qDebug()<<settingname;
    }
    QString filename = path + "/" +settingname;
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::information(this,tr("提示"),tr("无法打开文件"),QMessageBox::Ok);
        qDebug()<<"Can't open the file!"<<endl;
    }
    QTextStream  in(&file);
    QString ipaddress;
    ipaddress = in.readLine();
    qDebug()<<ipaddress;
    tcpClient->connectToHost(QHostAddress(ipaddress),6111);//连接
}

void postoperation::startTransfer()  //实现文件大小等信息的发送
{
    QDir dir;
    QString path = dir.currentPath();
    path += "/database";
    QDir dir2(path);
    QString dbname;
    if(dir2.exists())
    {
        dir2.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
        dir2.setSorting(QDir::Size | QDir::Reversed);
        QFileInfoList list = dir2.entryInfoList();
        QFileInfo fileInfo = list.at(0);
        dbname = fileInfo.fileName();
        qDebug()<<dbname;
    }
    fileName = path + "/" +dbname;

    qDebug()<<fileName;

    localFile = new QFile(fileName);
    if(!localFile->open(QFile::ReadOnly))
    {
        qDebug() << "open file error!";
        return;
    }
    totalBytes = localFile->size();
    //文件总大小
    QDataStream sendOut(&outBlock,QIODevice::WriteOnly);
    sendOut.setVersion(QDataStream::Qt_4_7);
    QString currentFileName = fileName.right(fileName.size() - fileName.lastIndexOf('/')-1);
    sendOut << qint64(0) << qint64(0) << currentFileName;
    //依次写入总大小信息空间，文件名大小信息空间，文件名---仅是文件名不含路径，没必要含路径
    totalBytes += outBlock.size();
    //这里的总大小是文件名大小等信息和实际文件大小的总和
    sendOut.device()->seek(0);
    sendOut<<totalBytes<<qint64((outBlock.size() - sizeof(qint64)*2));
    //totalBytes是文件总大小，即两个quint64的大小+文件名+文件实际内容的大小
    //qint64((outBlock.size() - sizeof(qint64)*2))得到的是文件名大小
    bytesToWrite = totalBytes - tcpClient->write(outBlock);
    //发送完头数据后剩余数据的大小，即文件实际内容的大小
    qDebug()<<"已连接"<<endl;
    outBlock.resize(0);
    qDebug()<<"#####"<<totalBytes;
}


void postoperation::updateClientProgress(qint64 numBytes) //更新进度条，实现文件的传送
{

    qDebug()<<"#######已发送："<<bytesWritten<<"剩余："<<bytesToWrite;
    bytesWritten += (int)numBytes;
    //已经发送数据的大小
    if(bytesToWrite > 0) //如果已经发送了数据
    {
        outBlock = localFile->read(qMin(bytesToWrite,loadSize));
      //每次发送loadSize大小的数据，这里设置为4KB，如果剩余的数据不足4KB，
      //就发送剩余数据的大小
        bytesToWrite -= (int)tcpClient->write(outBlock);
       //发送完一次数据后还剩余数据的大小
        outBlock.resize(0);
       //清空发送缓冲区
    }
    else
    {
        localFile->close(); //如果没有发送任何数据，则关闭文件
    }
    if(bytesWritten == totalBytes) //发送完毕
    {
        QMessageBox::information(this,tr("提示"),tr("传送文件 %1 成功").arg(fileName),QMessageBox::Ok);
        localFile->close();
        tcpClient->close();
    }
}

void postoperation::displayError(QAbstractSocket::SocketError) //显示错误
{
    qDebug() << tcpClient->errorString();
    tcpClient->close();
    ui->pbsendfile->setEnabled(true);
}

void postoperation::on_pbsendfile_clicked()
{
    send();
}
