#include "postmanage.h"
#include "ui_postmanage.h"

#include "mainwindow.h"
#include "postoperation.h"
#include "databaseconnection.h"

#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>


bool leuserfocus;
bool lepwdfocus;

//保存登陆用户名，提供给postinput使用
QString Username;

QString str;

postmanage::postmanage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::postmanage)
{
    ui->setupUi(this);
    //
    ui->lePassWord->setEchoMode(QLineEdit::Password);
    ui->leUserName->setText("");
    ui->leUserName->setFocus();
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
    ui->pbReturn_postmanage->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点

}

postmanage::~postmanage()
{
    delete ui;
}

void postmanage::on_pbReturn_postmanage_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    MainWindow *pm =new MainWindow(this);
    pm->show();
}

void postmanage::on_pb0_clicked()
{
    if(ui->leUserName->hasFocus())//输入框Username焦点
    {
        QString str = ui->leUserName->text() + "0";
        ui->leUserName->setText(QString(str));
    }
    if(ui->lePassWord->hasFocus())//输入框Username焦点
    {
        QString str = ui->lePassWord->text() + "0";
        ui->lePassWord->setText(QString(str));
    }
}

void postmanage::on_pb1_clicked()
{
    if(ui->leUserName->hasFocus())//输入框Username焦点
    {
        QString str = ui->leUserName->text() + "1";
        ui->leUserName->setText(QString(str));
    }
    if(ui->lePassWord->hasFocus())//输入框Username焦点
    {
        QString str = ui->lePassWord->text() + "1";
        ui->lePassWord->setText(QString(str));
    }
}

void postmanage::on_pb2_clicked()
{
    if(ui->leUserName->hasFocus())//输入框Username焦点
    {
        QString str = ui->leUserName->text() + "2";
        ui->leUserName->setText(QString(str));
    }
    if(ui->lePassWord->hasFocus())//输入框Username焦点
    {
        QString str = ui->lePassWord->text() + "2";
        ui->lePassWord->setText(QString(str));
    }
}

void postmanage::on_pb3_clicked()
{
    if(ui->leUserName->hasFocus())//输入框Username焦点
    {
        QString str = ui->leUserName->text() + "3";
        ui->leUserName->setText(QString(str));
    }
    if(ui->lePassWord->hasFocus())//输入框Username焦点
    {
        QString str = ui->lePassWord->text() + "3";
        ui->lePassWord->setText(QString(str));
    }
}

void postmanage::on_pb4_clicked()
{
    if(ui->leUserName->hasFocus())//输入框Username焦点
    {
        QString str = ui->leUserName->text() + "4";
        ui->leUserName->setText(QString(str));
    }
    if(ui->lePassWord->hasFocus())//输入框Username焦点
    {
        QString str = ui->lePassWord->text() + "4";
        ui->lePassWord->setText(QString(str));
    }
}

void postmanage::on_pb5_clicked()
{
    if(ui->leUserName->hasFocus())//输入框Username焦点
    {
        QString str = ui->leUserName->text() + "5";
        ui->leUserName->setText(QString(str));
    }
    if(ui->lePassWord->hasFocus())//输入框Username焦点
    {
        QString str = ui->lePassWord->text() + "5";
        ui->lePassWord->setText(QString(str));
    }
}

void postmanage::on_pb6_clicked()
{
    if(ui->leUserName->hasFocus())//输入框Username焦点
    {
        QString str = ui->leUserName->text() + "6";
        ui->leUserName->setText(QString(str));
    }
    if(ui->lePassWord->hasFocus())//输入框Username焦点
    {
        QString str = ui->lePassWord->text() + "6";
        ui->lePassWord->setText(QString(str));
    }
}

void postmanage::on_pb7_clicked()
{
    if(ui->leUserName->hasFocus())//输入框Username焦点
    {
        QString str = ui->leUserName->text() + "7";
        ui->leUserName->setText(QString(str));
    }
    if(ui->lePassWord->hasFocus())//输入框Username焦点
    {
        QString str = ui->lePassWord->text() + "7";
        ui->lePassWord->setText(QString(str));
    }
}

void postmanage::on_pb8_clicked()
{
    if(ui->leUserName->hasFocus())//输入框Username焦点
    {
        QString str = ui->leUserName->text() + "8";
        ui->leUserName->setText(QString(str));
    }
    if(ui->lePassWord->hasFocus())//输入框Username焦点
    {
        QString str = ui->lePassWord->text() + "8";
        ui->lePassWord->setText(QString(str));
    }
}

void postmanage::on_pb9_clicked()
{
    if(ui->leUserName->hasFocus())//输入框Username焦点
    {
        QString str = ui->leUserName->text() + "9";
        ui->leUserName->setText(QString(str));
    }
    if(ui->lePassWord->hasFocus())//输入框Username焦点
    {
        QString str = ui->lePassWord->text() + "9";
        ui->lePassWord->setText(QString(str));
    }
}

void postmanage::on_pbDelete_clicked()
{
    if(ui->leUserName->hasFocus())//输入框Username焦点
    {
        QString str = ui->leUserName->text();
        if(!(str.length()==1))
            str = str.left(str.length()-1);
        else str ="";
        ui->leUserName->setText(QString(str));
    }
    if(ui->lePassWord->hasFocus())//输入框Username焦点
    {
        QString str = ui->lePassWord->text();
        if(!(str.length()==1))
            str = str.left(str.length()-1);
        else str ="";
        ui->lePassWord->setText(QString(str));
    }
}

void postmanage::on_pbOK_clicked()
{
    databaseconnection::setdatabase();
    databaseconnection::Open();

    bool success = false;
    QString user =ui->leUserName->text().trimmed();
    QString pwd  =ui->lePassWord->text().trimmed();
    Username = user;
    if(ui->leUserName->text().isEmpty())
    {
        QMessageBox::information(this,tr("提示"),tr("请输入用户名称"),QMessageBox::Ok);
    }
    if(ui->lePassWord->text().isEmpty())
    {
        QMessageBox::information(this,tr("提示"),tr("请输入登陆密码"),QMessageBox::Ok);
    }
    if(!ui->leUserName->text().isEmpty()&&!ui->lePassWord->text().isEmpty())
    {
        QSqlQuery query;
        if(query.exec("select * from login"))
        {
            while(query.next())
            {
                if(user==query.value(1).toString()&&pwd==query.value(2).toString())
                {
                    success = true;
                    break;
                }
            }
            if(success)
            {
                QMessageBox::information(this,tr("提示"),tr("登陆成功！"),QMessageBox::Ok);
                this->close();
                this->setAttribute(Qt::WA_DeleteOnClose,true);
                postoperation *p =new postoperation();
                p->show();
            }
            else
            {
                QMessageBox::warning(this,tr("提示"),tr("用户名或密码错误！"),QMessageBox::Ok);
                ui->lePassWord->clear();
                ui->leUserName->clear();
            }
        }
        else
        {
            qDebug()<<"Query Error!"<<query.lastError().text();
        }
    }
        databaseconnection::Close();
}
