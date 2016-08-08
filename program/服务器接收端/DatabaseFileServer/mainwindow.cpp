#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    totalBytes = 0;
    bytesReceived = 0;
    fileNameSize = 0;
    ui->le_ip->setText("192.168.1.200");
    connect(&tcpServer,SIGNAL(newConnection()),this,SLOT(acceptConnection()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start() //开始监听
{
    ui->pbOK->setEnabled(false);
    bytesReceived =0;
    QString ipaddress = ui->le_ip->text().trimmed();
    if(!tcpServer.listen(QHostAddress::Any,6111))
    {
        qDebug() << tcpServer.errorString();
        close();
        return;
    }
    ui->label_status->setText(tr("服务器端开始等待客户端进行数据传输"));
}

void MainWindow::acceptConnection()  //接受连接
{
    tcpServerConnection = new QTcpSocket;
    tcpServerConnection = tcpServer.nextPendingConnection();
    connect(tcpServerConnection,SIGNAL(readyRead()),this,SLOT(updateServerProgress()));
    connect(tcpServerConnection,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(displayError(QAbstractSocket::SocketError)));
    ui->label_status->setText(tr("接受连接"));
    tcpServer.close();
}

void MainWindow::updateServerProgress()  //更新进度条，接收数据
{
    QDataStream in(tcpServerConnection);
    in.setVersion(QDataStream::Qt_4_7);
    if(bytesReceived <= sizeof(qint64)*2)
    { //如果接收到的数据小于16个字节，那么是刚开始接收数据，我们保存到//来的头文件信息

        if((tcpServerConnection->bytesAvailable() >= sizeof(qint64)*2)&& (fileNameSize == 0))
        { //接收数据总大小信息和文件名大小信息
            in >> totalBytes >> fileNameSize;
            bytesReceived += sizeof(qint64) * 2;
        }

        if((tcpServerConnection->bytesAvailable() >= fileNameSize)
                && (fileNameSize != 0))
        {  //接收文件名，并建立文件
            in >> fileName;
            ui->label_status->setText(tr("接收文件 %1 …").arg(fileName));
            bytesReceived += fileNameSize;
            localFile = new QFile(fileName);
            if(!localFile->open(QFile::WriteOnly))
            {
                qDebug() << "open file error!";
                return;
            }
        }
        else return;
    }

    if(bytesReceived < totalBytes)
    {  //如果接收的数据小于总数据，那么写入文件
        bytesReceived += tcpServerConnection->bytesAvailable();
        inBlock = tcpServerConnection->readAll();
        localFile->write(inBlock);
        inBlock.resize(0);
    }

    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(bytesReceived);
    //更新进度条
    if(bytesReceived == totalBytes)

    { //接收数据完成时
        tcpServerConnection->close();
        localFile->close();
        ui->pbOK->setEnabled(true);
        ui->label_status->setText(tr("接收文件 %1 成功！").arg(fileName));

    }
}

void MainWindow::displayError(QAbstractSocket::SocketError) //错误处理
{
    qDebug() << tcpServerConnection->errorString();
    tcpServerConnection->close();
    ui->progressBar->reset();
    ui->label_status->setText(tr("服务端就绪"));
    ui->pbOK->setEnabled(true);
}

void MainWindow::on_pbOK_clicked()
{
    start();
}
