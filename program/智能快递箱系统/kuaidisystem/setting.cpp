#include "setting.h"
#include "ui_setting.h"

#include "mainwindow.h"
#include "databaseconnection.h"

#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>

setting::setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);
    ui->pb0->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pb1->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pb2->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pb3->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pb4->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pb5->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pb6->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pb7->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pb8->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pb9->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pbpoint->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pbDelete->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pb_create->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pb_return->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->le_ip->setFocus();
}

setting::~setting()
{
    delete ui;
}

void setting::on_pb_return_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    MainWindow *h = new MainWindow(this);
    h->show();
}

void setting::on_pb_create_clicked()
{
    //获取输入信息
    QString ipaddress = ui->le_ip->text().trimmed();
    QString name = ui->le_name->text().trimmed();
    QString Big = ui->le_big->text().trimmed();
    QString Middle = ui->le_middle->text().trimmed();
    QString Small = ui->le_small->text().trimmed();

    int Bignum = Big.toInt();
    int Middlenum = Middle.toInt();
    int Smallnum = Small.toInt();

    //写入配置文件
    //load(":/picture/image/SWJTU.png");
    QDir dirset;
    QString pathset = dirset.currentPath();
    pathset += "/setting";
    QDir dirset2(pathset);
    if(dirset2.exists())
    {
        qDebug()<<"Dir already exists!";
    }
    else
    {
        bool ok = dirset2.mkdir(pathset);
        if(ok)
        {
            qDebug()<<"Creat dir success!";
        }
    }
    QString fileName = pathset+"/"+"setting.txt";
    QFile file(fileName);
    if(file.exists())
    {
        qDebug()<<"setting.txt exists!" ;
    }
    else
    {
        file.open(QIODevice::WriteOnly);
        file.close();
    }


    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::information(this,tr("提示"),tr("无法打开文件"),QMessageBox::Ok);
        qDebug()<<"Can't open the file!"<<endl;
    }
    QTextStream  out(&file);
    out << QString(ipaddress)<<endl;
    out << QString(name)<<endl;
    out << QString(Big)<<endl;
    out << QString(Middle)<<endl;
    out << QString(Small)<<endl;
    file.close();

    //创建对应数据库
    //判断数据库文件是否存在，如果存在则提示，不存在则创建。

    QDir dir;
    QString path = dir.currentPath();
    path += "/database";
    QDir dir2(path);
    if(dir2.exists())
    {
        qDebug()<<"Dir already exists!";
    }
    else
    {
        bool ok = dir2.mkdir(path);
        if(ok)
        {
            qDebug()<<"Creat dir success!";
        }
    }

    //判断数据库文件是否存在，不存在则创建数据库文件
    QString dbname = name + ".db";

    QString filename2 = path + "/"+name + ".db";
    qDebug()<<filename2;
    QFile file2(filename2);
    if(!file2.exists())
    {
        databaseconnection::databasename = filename2;
        if(!databaseconnection::Open())
        {
            QMessageBox::information(this,tr("提示"),tr("无法打开数据库"),QMessageBox::Ok);
        }
        else
        {
            QSqlQuery query;
            if(query.exec("CREATE TABLE admin ( Name CHAR( 20 )  PRIMARY KEY NOT NULL,"
                          "Password    CHAR( 20 )  NOT NULL,"
                          "Description CHAR( 20 )  NOT NULL )"))
                if(query.exec("CREATE TABLE box ( BoxID CHAR( 20 )  NOT NULL,"
                              "Type      CHAR( 20 )  NOT NULL,"
                              "PostID    CHAR( 20 )  DEFAULT ( 0 ),"
                              "BoxStatus CHAR( 20 )  DEFAULT ( 'available' ))"))
                    if(query.exec("CREATE TABLE login ( ID INT( 11 )   PRIMARY KEY NOT NULL,"
                                  "Username CHAR( 20 )  NOT NULL,"
                                  "Password CHAR( 20 )  NOT NULL,"
                                  "Company  CHAR( 20 )  NOT NULL) "))
                        if(query.exec("CREATE TABLE post ( Number     CHAR( 20 )  NOT NULL,"
                                      "Tel        CHAR( 20 )  NOT NULL,"
                                      "UserID     CHAR( 20 )  NOT NULL,"
                                      "PostStatus CHAR( 20 ),"
                                      "PostBox    CHAR( 20 ),"
                                      "PostTime   DATETIME    DEFAULT ( 0 ))"))
                            if(query.exec("CREATE TABLE receive ( Number CHAR( 20 )  NOT NULL,"
                                          "Password CHAR( 20 )  NOT NULL,"
                                          " Tel  CHAR( 20 )  NOT NULL,"
                                          "ReceiveStatus CHAR( 20 ),"
                                          "ReceiveTime   DATETIME    DEFAULT ( 0 ) )"))
                            {
                                qDebug()<<"Table create success!";
                            }

            for(int i=0;i<Bignum;i++)
            {
                QString type = "Big";
                QString status = "available";
                QString id = QString::number(i+1,10);
                QString boxID = "B"+id;
                query.prepare("INSERT INTO box (BoxID, Type, BoxStatus) VALUES (?, ?, ?)");
                QVariantList BoxID;
                BoxID << boxID;
                query.addBindValue(BoxID);
                QVariantList Type;
                Type << type;
                query.addBindValue(Type);
                QVariantList BoxStatus;
                BoxStatus <<status;
                query.addBindValue(BoxStatus);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("插入数据失败big！"),query.lastError().text());
                }

            }
            for(int i=0;i<Middlenum;i++)
            {
                QString type = "Middle";
                QString status = "available";
                QString id = QString::number(i+1,10);
                QString boxID = "M"+id;
                query.prepare("INSERT INTO box (BoxID, Type, BoxStatus) VALUES (?, ?, ?)");
                QVariantList BoxID;
                BoxID << boxID;
                query.addBindValue(BoxID);
                QVariantList Type;
                Type << type;
                query.addBindValue(Type);
                QVariantList BoxStatus;
                BoxStatus <<status;
                query.addBindValue(BoxStatus);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("插入数据失败middle！"),query.lastError().text());
                }

            }
            for(int i=0;i<Smallnum;i++)
            {
                QString type = "Small";
                QString status = "available";
                QString id = QString::number(i+1,10);
                QString boxID = "S"+id;
                query.prepare("INSERT INTO box (BoxID, Type, BoxStatus) VALUES (?, ?, ?)");
                QVariantList BoxID;
                BoxID << boxID;
                query.addBindValue(BoxID);
                QVariantList Type;
                Type << type;
                query.addBindValue(Type);
                QVariantList BoxStatus;
                BoxStatus <<status;
                query.addBindValue(BoxStatus);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("插入数据失败small！"),query.lastError().text());
                }
            }

            QString username = "1213001";
            QString userpassword = "147789";
            QString usercompany = "maling";
            query.prepare("INSERT INTO login (ID, Username, Password, Company) VALUES (2008001, ?, ?, ?)");
            QVariantList Username;
            Username << username;
            query.addBindValue(Username);
            QVariantList Password;
            Password << userpassword;
            query.addBindValue(Password);
            QVariantList Company;
            Company <<usercompany;
            query.addBindValue(Company);
            if (!query.execBatch())
            {
                QMessageBox::critical(0, QObject::tr("插入数据失败login！"),query.lastError().text());
            }

            QString adminname2 = "admin";
            QString adminpassword2 = "admin";
            QString admindescription2 = "admin";
            query.prepare("INSERT INTO admin (Name, Password, Description) VALUES (?, ?, ?)");
            QVariantList adminname;
            adminname << adminname2;
            query.addBindValue(adminname);
            QVariantList adminpassword;
            adminpassword << adminpassword2;
            query.addBindValue(adminpassword);
            QVariantList admindescription;
            admindescription <<admindescription2;
            query.addBindValue(admindescription);
            if (!query.execBatch())
            {
                QMessageBox::critical(0, QObject::tr("插入数据失败admin！"),query.lastError().text());
            }

            databaseconnection::Close();
            QMessageBox::information(this,tr("提示"),tr("设置成功！"),QMessageBox::Ok);
        }
    }
    else
    {
        qDebug()<<"Database exists!";
    }
}


void setting::on_pb1_clicked()
{
    if(ui->le_name->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->le_name->text() + "1";
        ui->le_name->setText(QString(str));
    }
    if(ui->le_big->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_big->text() + "1";
        ui->le_big->setText(QString(str));
    }
    if(ui->le_middle->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_middle->text() + "1";
        ui->le_middle->setText(QString(str));
    }
    if(ui->le_small->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_small->text() + "1";
        ui->le_small->setText(QString(str));
    }
    if(ui->le_ip->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_ip->text() + "1";
        ui->le_ip->setText(QString(str));
    }
}

void setting::on_pb2_clicked()
{
    if(ui->le_name->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->le_name->text() + "2";
        ui->le_name->setText(QString(str));
    }
    if(ui->le_big->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_big->text() + "2";
        ui->le_big->setText(QString(str));
    }
    if(ui->le_middle->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_middle->text() + "2";
        ui->le_middle->setText(QString(str));
    }
    if(ui->le_small->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_small->text() + "2";
        ui->le_small->setText(QString(str));
    }
    if(ui->le_ip->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_ip->text() + "2";
        ui->le_ip->setText(QString(str));
    }
}

void setting::on_pb3_clicked()
{
    if(ui->le_name->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->le_name->text() + "3";
        ui->le_name->setText(QString(str));
    }
    if(ui->le_big->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_big->text() + "3";
        ui->le_big->setText(QString(str));
    }
    if(ui->le_middle->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_middle->text() + "3";
        ui->le_middle->setText(QString(str));
    }
    if(ui->le_small->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_small->text() + "3";
        ui->le_small->setText(QString(str));
    }
    if(ui->le_ip->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_ip->text() + "3";
        ui->le_ip->setText(QString(str));
    }
}

void setting::on_pb4_clicked()
{
    if(ui->le_name->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->le_name->text() + "4";
        ui->le_name->setText(QString(str));
    }
    if(ui->le_big->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_big->text() + "4";
        ui->le_big->setText(QString(str));
    }
    if(ui->le_middle->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_middle->text() + "4";
        ui->le_middle->setText(QString(str));
    }
    if(ui->le_small->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_small->text() + "4";
        ui->le_small->setText(QString(str));
    }
    if(ui->le_ip->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_ip->text() + "4";
        ui->le_ip->setText(QString(str));
    }
}

void setting::on_pb5_clicked()
{
    if(ui->le_name->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->le_name->text() + "5";
        ui->le_name->setText(QString(str));
    }
    if(ui->le_big->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_big->text() + "5";
        ui->le_big->setText(QString(str));
    }
    if(ui->le_middle->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_middle->text() + "5";
        ui->le_middle->setText(QString(str));
    }
    if(ui->le_small->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_small->text() + "5";
        ui->le_small->setText(QString(str));
    }
    if(ui->le_ip->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_ip->text() + "5";
        ui->le_ip->setText(QString(str));
    }
}

void setting::on_pb6_clicked()
{
    if(ui->le_name->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->le_name->text() + "6";
        ui->le_name->setText(QString(str));
    }
    if(ui->le_big->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_big->text() + "6";
        ui->le_big->setText(QString(str));
    }
    if(ui->le_middle->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_middle->text() + "6";
        ui->le_middle->setText(QString(str));
    }
    if(ui->le_small->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_small->text() + "6";
        ui->le_small->setText(QString(str));
    }
    if(ui->le_ip->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_ip->text() + "6";
        ui->le_ip->setText(QString(str));
    }
}

void setting::on_pb7_clicked()
{
    if(ui->le_name->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->le_name->text() + "7";
        ui->le_name->setText(QString(str));
    }
    if(ui->le_big->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_big->text() + "7";
        ui->le_big->setText(QString(str));
    }
    if(ui->le_middle->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_middle->text() + "7";
        ui->le_middle->setText(QString(str));
    }
    if(ui->le_small->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_small->text() + "7";
        ui->le_small->setText(QString(str));
    }
    if(ui->le_ip->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_ip->text() + "7";
        ui->le_ip->setText(QString(str));
    }
}

void setting::on_pb8_clicked()
{
    if(ui->le_name->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->le_name->text() + "8";
        ui->le_name->setText(QString(str));
    }
    if(ui->le_big->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_big->text() + "8";
        ui->le_big->setText(QString(str));
    }
    if(ui->le_middle->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_middle->text() + "8";
        ui->le_middle->setText(QString(str));
    }
    if(ui->le_small->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_small->text() + "8";
        ui->le_small->setText(QString(str));
    }
    if(ui->le_ip->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_ip->text() + "8";
        ui->le_ip->setText(QString(str));
    }
}

void setting::on_pb9_clicked()
{
    if(ui->le_name->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->le_name->text() + "9";
        ui->le_name->setText(QString(str));
    }
    if(ui->le_big->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_big->text() + "9";
        ui->le_big->setText(QString(str));
    }
    if(ui->le_middle->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_middle->text() + "9";
        ui->le_middle->setText(QString(str));
    }
    if(ui->le_small->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_small->text() + "9";
        ui->le_small->setText(QString(str));
    }
    if(ui->le_ip->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_ip->text() + "9";
        ui->le_ip->setText(QString(str));
    }
}

void setting::on_pb0_clicked()
{
    if(ui->le_name->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->le_name->text() + "0";
        ui->le_name->setText(QString(str));
    }
    if(ui->le_big->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_big->text() + "0";
        ui->le_big->setText(QString(str));
    }
    if(ui->le_middle->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_middle->text() + "0";
        ui->le_middle->setText(QString(str));
    }
    if(ui->le_small->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_small->text() + "0";
        ui->le_small->setText(QString(str));
    }
    if(ui->le_ip->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_ip->text() + "0";
        ui->le_ip->setText(QString(str));
    }
}

void setting::on_pbDelete_clicked()
{
    if(ui->le_name->hasFocus())//输入框Username焦点
    {
        QString str = ui->le_name->text();
        if(!(str.length()==1))
            str = str.left(str.length()-1);
        else str ="";
        ui->le_name->setText(QString(str));
    }
    if(ui->le_big->hasFocus())//输入框Username焦点
    {
        QString str = ui->le_big->text();
        if(!(str.length()==1))
            str = str.left(str.length()-1);
        else str ="";
        ui->le_big->setText(QString(str));
    }
    if(ui->le_middle->hasFocus())//输入框Username焦点
    {
        QString str = ui->le_middle->text();
        if(!(str.length()==1))
            str = str.left(str.length()-1);
        else str ="";
        ui->le_middle->setText(QString(str));
    }
    if(ui->le_small->hasFocus())//输入框Username焦点
    {
        QString str = ui->le_small->text();
        if(!(str.length()==1))
            str = str.left(str.length()-1);
        else str ="";
        ui->le_small->setText(QString(str));
    }

}

void setting::on_pbpoint_clicked()
{
    if(ui->le_name->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->le_name->text() + ".";
        ui->le_name->setText(QString(str));
    }
    if(ui->le_big->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_big->text() + ".";
        ui->le_big->setText(QString(str));
    }
    if(ui->le_middle->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_middle->text() + ".";
        ui->le_middle->setText(QString(str));
    }
    if(ui->le_small->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_small->text() + ".";
        ui->le_small->setText(QString(str));
    }
    if(ui->le_ip->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_ip->text() + ".";
        ui->le_ip->setText(QString(str));
    }
}
