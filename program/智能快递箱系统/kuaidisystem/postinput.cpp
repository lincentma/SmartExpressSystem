#include "postinput.h"
#include "ui_postinput.h"

#include "postoperation.h"
#include "createpwd.h"
#include "sms.h"
#include "databaseconnection.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlError>
#include <QTime>


//使用登陆用户名
extern QString Username;
//保存快递录入号码
QString PostNumber;
//保存快递领取密码
QString RPwd;

postinput::postinput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::postinput)
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
    ui->pbReturn->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->cbBig->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->cbMiddle->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->cbSmall->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->leID->setFocus();

}

postinput::~postinput()
{
    delete ui;

}

void postinput::on_pbReturn_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    postoperation *p =new postoperation(this);
    p->show();
}

void postinput::on_pb0_clicked()
{
    if(ui->leID->hasFocus())//输入框ID焦点
    {
        QString str = ui->leID->text() + "0";
        ui->leID->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "0";
        ui->leTel->setText(QString(str));
    }
}

void postinput::on_pb1_clicked()
{
    if(ui->leID->hasFocus())//输入框ID焦点
    {
        QString str = ui->leID->text() + "1";
        ui->leID->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "1";
        ui->leTel->setText(QString(str));
    }
}

void postinput::on_pb2_clicked()
{
    if(ui->leID->hasFocus())//输入框ID焦点
    {
        QString str = ui->leID->text() + "2";
        ui->leID->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "2";
        ui->leTel->setText(QString(str));
    }
}

void postinput::on_pb3_clicked()
{
    if(ui->leID->hasFocus())//输入框ID焦点
    {
        QString str = ui->leID->text() + "3";
        ui->leID->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "3";
        ui->leTel->setText(QString(str));
    }
}

void postinput::on_pb4_clicked()
{
    if(ui->leID->hasFocus())//输入框ID焦点
    {
        QString str = ui->leID->text() + "4";
        ui->leID->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "4";
        ui->leTel->setText(QString(str));
    }
}

void postinput::on_pb5_clicked()
{
    if(ui->leID->hasFocus())//输入框ID焦点
    {
        QString str = ui->leID->text() + "5";
        ui->leID->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "5";
        ui->leTel->setText(QString(str));
    }
}

void postinput::on_pb6_clicked()
{
    if(ui->leID->hasFocus())//输入框ID焦点
    {
        QString str = ui->leID->text() + "6";
        ui->leID->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "6";
        ui->leTel->setText(QString(str));
    }
}

void postinput::on_pb7_clicked()
{
    if(ui->leID->hasFocus())//输入框ID焦点
    {
        QString str = ui->leID->text() + "7";
        ui->leID->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "7";
        ui->leTel->setText(QString(str));
    }
}

void postinput::on_pb8_clicked()
{
    if(ui->leID->hasFocus())//输入框ID焦点
    {
        QString str = ui->leID->text() + "8";
        ui->leID->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "8";
        ui->leTel->setText(QString(str));
    }
}

void postinput::on_pb9_clicked()
{
    if(ui->leID->hasFocus())//输入框ID焦点
    {
        QString str = ui->leID->text() + "9";
        ui->leID->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "9";
        ui->leTel->setText(QString(str));
    }
}

void postinput::on_pbDelete_clicked()
{
    if(ui->leID->hasFocus())//输入框leID焦点
    {
        QString str = ui->leID->text();
        if(!(str.length()==1))
            str = str.left(str.length()-1);
        else str ="";
        ui->leID->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框leTel焦点
    {
        QString str = ui->leTel->text();
        if(!(str.length()==1))
            str = str.left(str.length()-1);
        else str ="";
        ui->leTel->setText(QString(str));
    }
}

void postinput::on_pbOK_clicked()
{
    databaseconnection::setdatabase();
    databaseconnection::Open();
    //获取输入数据
    QString number =ui->leID->text().trimmed();
    QString tel  =ui->leTel->text().trimmed();
    PostNumber = number;

    if(number.isEmpty())
    {
        QMessageBox::information(this,tr("提示"),tr("请输入快递单号！"),QMessageBox::Ok);
    }
    if(tel.isEmpty())
    {
        QMessageBox::information(this,tr("提示"),tr("请输入手机号码！"),QMessageBox::Ok);
    }

    //向post、receive、box表插入数据
    if(!number.isEmpty()&&!tel.isEmpty())
    {
        //插入数据到box表，首先需要选择快递箱类型
        //选取大号快递箱
        if(ui->cbBig->isChecked())
        {
            QSqlQuery query;
            //判断所选箱子类的数量是否为0
            QString BStatus = "available";
            QString BType = "Big";
            query.exec("select count(*) from box where BoxStatus = '"+BStatus+"' and Type = '"+BType+"'");
            int Boxnumber = 0;
            QString BoxID = "";
            if(query.next())
            {
                Boxnumber = query.value(0).toInt();
            }
            //选取投放快递箱子的编号
            if(Boxnumber!=0)
            {
                //插入数据到post表
                query.prepare("INSERT INTO post (Number, Tel, UserID) VALUES (?, ?, ?)");
                QVariantList Number;
                Number << number;
                query.addBindValue(Number);
                QVariantList Tel;
                Tel << tel;
                query.addBindValue(Tel);
                QVariantList UserID;
                UserID <<Username;
                query.addBindValue(UserID);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("插入数据到post表失败！"),query.lastError().text());
                }
                if(!query.isActive())
                {
                    QMessageBox::warning(this,tr("错误"),tr("插入数据到post表失败！"),QMessageBox::Ok);
                }

                //插入数据到receive表
                RPwd = createpassword::createpwd();
                QString Rstatus2 = "arrived";
                query.prepare("INSERT INTO receive (Number, Password, Tel, ReceiveStatus) VALUES (?, ?, ?, ?)");
                QVariantList RNumber;
                RNumber << number;
                query.addBindValue(RNumber);
                QVariantList Password;
                Password << RPwd;
                query.addBindValue(Password);
                QVariantList RTel;
                RTel << tel;
                query.addBindValue(RTel);
                QVariantList RStatus;
                RStatus << Rstatus2;
                query.addBindValue(RStatus);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("插入数据到receive表失败！"),query.lastError().text());
                }
                if(!query.isActive())
                {
                    QMessageBox::warning(this,tr("错误"),tr("插入数据到receive表失败！"),QMessageBox::Ok);
                }
                //插入box表
                query.exec("select BoxID from box where BoxStatus = '"+BStatus+"' and Type = '"+BType+"'");
                if(query.next())
                {
                    BoxID = query.value(0).toString();
                }
                QString status = "using";
                query.prepare("UPDATE box SET BoxStatus = ?,PostID = ? WHERE BoxID = ? ");
                QVariantList BStatus;
                BStatus << status;
                query.addBindValue(BStatus);
                QVariantList BPostID;
                BPostID << number;
                query.addBindValue(BPostID);
                QVariantList BID;
                BID << BoxID;
                query.addBindValue(BID);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("更新数据到box表失败！"),query.lastError().text());
                }
                //更新post表中的Postbox
                query.prepare("UPDATE post SET PostBox = ? WHERE Number = ? ");
                QVariantList PBox;
                PBox << BoxID;
                query.addBindValue(PBox);
                QVariantList PNumber;
                PNumber << number;
                query.addBindValue(PNumber);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("更新box数据到post表失败！"),query.lastError().text());
                }
            }
            else
            {
                QMessageBox::warning(this,tr("错误"),tr("大号快递箱已经用完，请重新选择！"),QMessageBox::Ok);
            }
        }
        //选中中号快递箱
        else if(ui->cbMiddle->isChecked())
        {
            QSqlQuery query;
            QString BStatus = "available";
            QString BType = "Middle";
            query.exec("select count(*) from box where BoxStatus = '"+BStatus+"' and Type = '"+BType+"'");
            int Boxnumber = 0;
            QString BoxID = "";
            if(query.next())
            {
                Boxnumber = query.value(0).toInt();
            }
            //选取投放快递箱子的编号
            if(Boxnumber!=0)
            {
                //插入数据到post表
                query.prepare("INSERT INTO post (Number, Tel, UserID) VALUES (?, ?, ?)");
                QVariantList Number;
                Number << number;
                query.addBindValue(Number);
                QVariantList Tel;
                Tel << tel;
                query.addBindValue(Tel);
                QVariantList UserID;
                UserID <<Username;
                query.addBindValue(UserID);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("插入数据到post表失败！"),query.lastError().text());
                }
                if(!query.isActive())
                {
                    QMessageBox::warning(this,tr("错误"),tr("插入数据到post表失败！"),QMessageBox::Ok);
                }

                //插入数据到receive表
                RPwd = createpassword::createpwd();
                QString Rstatus2 = "arrived";
                query.prepare("INSERT INTO receive (Number, Password, Tel, ReceiveStatus) VALUES (?, ?, ?, ?)");
                QVariantList RNumber;
                RNumber << number;
                query.addBindValue(RNumber);
                QVariantList Password;
                Password << RPwd;
                query.addBindValue(Password);
                QVariantList RTel;
                RTel << tel;
                query.addBindValue(RTel);
                QVariantList RStatus;
                RStatus << Rstatus2;
                query.addBindValue(RStatus);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("插入数据到receive表失败！"),query.lastError().text());
                }
                if(!query.isActive())
                {
                    QMessageBox::warning(this,tr("错误"),tr("插入数据到receive表失败！"),QMessageBox::Ok);
                }
               //插入数据到box表
                query.exec("select BoxID from box where BoxStatus = '"+BStatus+"' and Type = '"+BType+"'");
                if(query.next())
                {
                    BoxID = query.value(0).toString();
                }
                QString status = "using";
                query.prepare("UPDATE box SET BoxStatus = ?,PostID = ? WHERE BoxID = ? ");
                QVariantList BStatus;
                BStatus << status;
                query.addBindValue(BStatus);
                QVariantList BPostID;
                BPostID << number;
                query.addBindValue(BPostID);
                QVariantList BID;
                BID << BoxID;
                query.addBindValue(BID);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("更新数据到box表失败！"),query.lastError().text());
                }
                //更新post表中的Postbox
                query.prepare("UPDATE post SET PostBox = ? WHERE Number = ? ");
                QVariantList PBox;
                PBox << BoxID;
                query.addBindValue(PBox);
                QVariantList PNumber;
                PNumber << number;
                query.addBindValue(PNumber);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("更新box数据到post表失败！"),query.lastError().text());
                }
            }
            else
            {
                QMessageBox::warning(this,tr("错误"),tr("中号快递箱已经用完，请重新选择！"),QMessageBox::Ok);
            }
        }
       //选中小号快递箱
        else if(ui->cbSmall->isChecked())
        {
            QSqlQuery query;
            QString BStatus = "available";
            QString BType = "Small";
            query.exec("select count(*) from box where BoxStatus = '"+BStatus+"' and Type = '"+BType+"'");
            int Boxnumber = 0;
            QString BoxID = "";
            if(query.next())
            {
                Boxnumber = query.value(0).toInt();
            }
            //选取投放快递箱子的编号
            if(Boxnumber!=0)
            {
                //插入数据到post表
                query.prepare("INSERT INTO post (Number, Tel, UserID) VALUES (?, ?, ?)");
                QVariantList Number;
                Number << number;
                query.addBindValue(Number);
                QVariantList Tel;
                Tel << tel;
                query.addBindValue(Tel);
                QVariantList UserID;
                UserID <<Username;
                query.addBindValue(UserID);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("插入数据到post表失败！"),query.lastError().text());
                }
                if(!query.isActive())
                {
                    QMessageBox::warning(this,tr("错误"),tr("插入数据到post表失败！"),QMessageBox::Ok);
                }

                //插入数据到receive表
                RPwd = createpassword::createpwd();
                QString Rstatus2 = "arrived";
                query.prepare("INSERT INTO receive (Number, Password, Tel, ReceiveStatus) VALUES (?, ?, ?, ?)");
                QVariantList RNumber;
                RNumber << number;
                query.addBindValue(RNumber);
                QVariantList Password;
                Password << RPwd;
                query.addBindValue(Password);
                QVariantList RTel;
                RTel << tel;
                query.addBindValue(RTel);
                QVariantList RStatus;
                RStatus << Rstatus2;
                query.addBindValue(RStatus);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("插入数据到receive表失败！"),query.lastError().text());
                }
                if(!query.isActive())
                {
                    QMessageBox::warning(this,tr("错误"),tr("插入数据到receive表失败！"),QMessageBox::Ok);
                }
                //插入数据到box表
                query.exec("select BoxID from box where BoxStatus = '"+BStatus+"' and Type = '"+BType+"'");
                if(query.next())
                {
                    BoxID = query.value(0).toString();
                }
                QString status = "using";
                query.prepare("UPDATE box SET BoxStatus = ?,PostID = ? WHERE BoxID = ? ");
                QVariantList BStatus;
                BStatus << status;
                query.addBindValue(BStatus);
                QVariantList BPostID;
                BPostID << number;
                query.addBindValue(BPostID);
                QVariantList BID;
                BID << BoxID;
                query.addBindValue(BID);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("更新数据到box表失败！"),query.lastError().text());
                }
                //更新post表中的Postbox
                query.prepare("UPDATE post SET PostBox = ? WHERE Number = ? ");
                QVariantList PBox;
                PBox << BoxID;
                query.addBindValue(PBox);
                QVariantList PNumber;
                PNumber << number;
                query.addBindValue(PNumber);
                if (!query.execBatch())
                {
                    QMessageBox::critical(0, QObject::tr("更新box数据到post表失败！"),query.lastError().text());
                }
            }
            else
            {
                QMessageBox::warning(this,tr("错误"),tr("小号快递箱已经用完，请重新选择！"),QMessageBox::Ok);
            }
        }
        else
        {
            QMessageBox::information(this,tr("提示"),tr("无法发送短信，原因：没有选择快递箱类型！"),QMessageBox::Ok);
        }
        QMessageBox::information(this,tr("提示"),tr("数据写入成功！"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,tr("提示"),tr("无法发送短信，原因：输入信息为空或不完整！"),QMessageBox::Ok);
    }

    //发送短信
    sms send;
    if(send.setport())
    {
        QString smsBoxID;
        QSqlQuery query;
        query.exec("select BoxID from box where PostID = '"+number+"'");
        if(query.next())
        {
            smsBoxID = query.value(0).toString();
        }
        //转换收件人手机号码
        QString sms1 = send.convertPhone(tel);
        //生成短信内容
        QString sms2 = send.stringToUnicode(RPwd,smsBoxID);
        //发送短信字符串
        QString message = sms1+sms2;
        //发送短信长度
        QString smslen = send.smslength(sms2,tel);

        if(send.sendsms(message,smslen))
        {
            QMessageBox::information(this,tr("提示"),tr("投递快递成功！短信已经发送！"),QMessageBox::Ok);
            send.closeport();

            //PostStatus+PostTime
            QString status = "Posted";
            QDateTime time=QDateTime::currentDateTime();

            query.prepare("UPDATE post SET PostStatus = ?,PostTime = ?  WHERE Number = ? ");
            QVariantList PStatus;
            PStatus << status;
            query.addBindValue(PStatus);
            QVariantList PTime;
            PTime << time;
            query.addBindValue(PTime);
            QVariantList PNumber;
            PNumber << number;
            query.addBindValue(PNumber);
            if (!query.execBatch())
            {
                QMessageBox::critical(0, QObject::tr("Database Error"), query.lastError().text());
            }

        }
        else
        {
            QMessageBox::information(this,tr("提示"),tr("短信发送失败！"),QMessageBox::Ok);
            QString status = "SMS Failed";
            query.prepare("UPDATE post SET PostStatus = ? WHERE Number = ? ");
            QVariantList PStatus;
            PStatus << status;
            query.addBindValue(PStatus);
            QVariantList PNumber;
            PNumber << number;
            query.addBindValue(PNumber);
            if (!query.execBatch())
            {
                QMessageBox::critical(0, QObject::tr("Database Error"), query.lastError().text());
            }
        }
    }
    else
    {
        QMessageBox::information(this,tr("提示"),tr("短信发送设备无法打开！"),QMessageBox::Ok);
        QString status = "SMS Failed";
        QSqlQuery query;
        query.prepare("UPDATE post SET PostStatus = ? WHERE Number = ? ");
        QVariantList PStatus;
        PStatus << status;
        query.addBindValue(PStatus);
        QVariantList PNumber;
        PNumber << number;
        query.addBindValue(PNumber);
        if (!query.execBatch())
        {
            QMessageBox::critical(0, QObject::tr("Database Error"), query.lastError().text());
        }
    }

    //清除输入信息
    ui->leID->clear();
    ui->leTel->clear();
    ui->leID->setFocus();
    databaseconnection::Close();
}

void postinput::on_cbBig_clicked()
{
    ui->cbBig->setCheckable(true);
    ui->cbMiddle->setCheckable(false);
    ui->cbSmall->setCheckable(false);
}

void postinput::on_cbMiddle_clicked()
{
    ui->cbMiddle->setCheckable(true);
    ui->cbBig->setCheckable(false);
    ui->cbSmall->setCheckable(false);
}

void postinput::on_cbSmall_clicked()
{
    ui->cbSmall->setCheckable(true);
    ui->cbBig->setCheckable(false);
    ui->cbMiddle->setCheckable(false);
}
