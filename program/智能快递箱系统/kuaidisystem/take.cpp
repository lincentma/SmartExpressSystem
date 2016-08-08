#include "take.h"
#include "ui_take.h"

#include "mainwindow.h"
#include "sms.h"
#include "databaseconnection.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include<QSqlError>
#include <QDateTime>

take::take(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::take)
{
    ui->setupUi(this);

    //
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
    ui->pbDelete->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pbOK->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pbReturn_take->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点

}

take::~take()
{
    delete ui;
}

void take::on_pbReturn_take_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    MainWindow *t= new MainWindow(this);
    t->show();
}

void take::on_pb0_clicked()
{
    if(ui->lePassWord->hasFocus())//输入框lePassWord焦点
    {
        QString str = ui->lePassWord->text() + "0";
        ui->lePassWord->setText(QString(str));
    }
}

void take::on_pb1_clicked()
{
    if(ui->lePassWord->hasFocus())//输入框lePassWord焦点
    {
        QString str = ui->lePassWord->text() + "1";
        ui->lePassWord->setText(QString(str));
    }
}

void take::on_pb2_clicked()
{
    if(ui->lePassWord->hasFocus())//输入框lePassWord焦点
    {
        QString str = ui->lePassWord->text() + "2";
        ui->lePassWord->setText(QString(str));
    }
}

void take::on_pb3_clicked()
{
    if(ui->lePassWord->hasFocus())//输入框lePassWord焦点
    {
        QString str = ui->lePassWord->text() + "3";
        ui->lePassWord->setText(QString(str));
    }
}

void take::on_pb4_clicked()
{
    if(ui->lePassWord->hasFocus())//输入框lePassWord焦点
    {
        QString str = ui->lePassWord->text() + "4";
        ui->lePassWord->setText(QString(str));
    }
}

void take::on_pb5_clicked()
{
    if(ui->lePassWord->hasFocus())//输入框lePassWord焦点
    {
        QString str = ui->lePassWord->text() + "5";
        ui->lePassWord->setText(QString(str));
    }
}

void take::on_pb6_clicked()
{
    if(ui->lePassWord->hasFocus())//输入框lePassWord焦点
    {
        QString str = ui->lePassWord->text() + "6";
        ui->lePassWord->setText(QString(str));
    }
}

void take::on_pb7_clicked()
{
    if(ui->lePassWord->hasFocus())//输入框lePassWord焦点
    {
        QString str = ui->lePassWord->text() + "7";
        ui->lePassWord->setText(QString(str));
    }
}

void take::on_pb8_clicked()
{
    if(ui->lePassWord->hasFocus())//输入框lePassWord焦点
    {
        QString str = ui->lePassWord->text() + "8";
        ui->lePassWord->setText(QString(str));
    }
}

void take::on_pb9_clicked()
{
    if(ui->lePassWord->hasFocus())//输入框lePassWord焦点
    {
        QString str = ui->lePassWord->text() + "9";
        ui->lePassWord->setText(QString(str));
    }
}

void take::on_pbDelete_clicked()
{
    if(ui->lePassWord->hasFocus())//输入框lePassWord焦点
    {
        QString str = ui->lePassWord->text();
        if(!(str.length()==1))
            str = str.left(str.length()-1);
        else str ="";
        ui->lePassWord->setText(QString(str));
    }
}

void take::on_pbOK_clicked()
{
    QString Rnumber = "";
    bool success =false;
    QString tpasswd = ui->lePassWord->text().trimmed();

    databaseconnection::setdatabase();
    databaseconnection::Open();

    if(ui->lePassWord->text().isEmpty())
    {
        QMessageBox::information(this,tr("提示"),tr("请输入快递领取密码"),QMessageBox::Ok);
    }
    else
    {
        //判断密码是否正确
        QSqlQuery query;
        QString receivestatus;
        if(query.exec("select * from receive"))
        {
            while(query.next())
            {
                if(tpasswd==query.value(1).toString())
                {
                    receivestatus = query.value(3).toString();
                    if(receivestatus == "success")
                    {
                        success = false;

                    }
                    else
                    {
                        success = true;
                    }

                    Rnumber=query.value(0).toString();
                    break;
                }
            }
        }
        //更新表数据——receive和box
        if(success)
        {

            //Receive
            QString status = "success";
            QDateTime time=QDateTime::currentDateTime();
            query.prepare("UPDATE receive SET ReceiveStatus = ?,ReceiveTime = ? WHERE Password = ? ");
            QVariantList RStatus;
            RStatus << status;
            query.addBindValue(RStatus);
            QVariantList RTime;
            RTime << time;
            query.addBindValue(RTime);
            QVariantList RPasswd;
            RPasswd << tpasswd;
            query.addBindValue(RPasswd);
            if (!query.execBatch())
            {
                QMessageBox::critical(0, QObject::tr("Database Error"),query.lastError().text());
            }
            //Box
            status = "available";
            query.prepare("UPDATE box SET BoxStatus = ? WHERE PostID = ? ");
            QVariantList RBStatus;
            RBStatus << status;
            query.addBindValue(RBStatus);
            QVariantList RPNumber;
            RPNumber << Rnumber;
            query.addBindValue(RPNumber);
            if (!query.execBatch())
            {
                QMessageBox::critical(0, QObject::tr("Database Error"),
                                      query.lastError().text());
            }
            //Message
            QString BoxID;
            query.exec("select BoxID from box where PostID = '"+Rnumber+"'");
            if(query.next())
            {
                BoxID = query.value(0).toString();
            }
            ui->label_status->setText(tr("您的快递在<")+BoxID+tr(">号箱，请及时领取，领取完毕请及时关门！"));
            ui->lePassWord->clear();

            //发送短信
            success =false;
            sms send;
            if(send.setport())
            {
                QString stel;
                QString snum;
                QSqlQuery query;
                query.exec("select Tel,Number from receive where Password = '"+tpasswd+"'");
                if(query.next())
                {
                    stel = query.value(0).toString();
                    snum = query.value(1).toString();
                }
                //转换收件人手机号码
                QString sms1 = send.convertPhone(stel);
                //生成短信内容
                QString sms2 = send.stringToUnicode2(snum);
                //发送短信字符串
                QString message = sms1+sms2;
                //发送短信长度
                QString smslen = send.smslength(sms2,stel);

                if(send.sendsms(message,smslen))
                {
                    send.closeport();
                }
                else
                {
                    QMessageBox::information(this,tr("提示"),tr("领取短信发送失败！"),QMessageBox::Ok);
                }
            }
            else
            {
                QMessageBox::information(this,tr("提示"),tr("短信发送设备无法打开！"),QMessageBox::Ok);
            }
        }
        else
        {
            ui->label_status->setText(tr("您输入的快递领取密码错误，请重新输入！"));
            ui->lePassWord->clear();
        }
    }
        databaseconnection::Close();
}
