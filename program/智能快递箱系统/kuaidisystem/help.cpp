#include "help.h"
#include "ui_help.h"

#include "mainwindow.h"
#include "setting.h"

#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QDir>


help::help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::help)
{
    ui->setupUi(this);
    ui->le_setpassword->setEchoMode(QLineEdit::Password);
    ui->pbSetting->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pbReturn_help->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
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
    ui->le_setpassword->setFocus();

}

help::~help()
{
    delete ui;
}

void help::on_pbReturn_help_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    MainWindow *h = new MainWindow(this);
    h->show();
}

void help::on_pbSetting_clicked()
{
    QString password = ui->le_setpassword->text().trimmed();
    QString settingpassword = "000000";
    if(password != settingpassword)
    {
        QMessageBox::information(this,tr("提示"),tr("密码错误！"),QMessageBox::Ok);
    }
    else
    {
        this->close();
        this->setAttribute(Qt::WA_DeleteOnClose,true);
        setting *s = new setting(this);
        s->show();
    }

}

void help::on_pb1_clicked()
{
    if(ui->le_setpassword->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_setpassword->text() + "1";
        ui->le_setpassword->setText(QString(str));
    }
}

void help::on_pb2_clicked()
{
    if(ui->le_setpassword->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_setpassword->text() + "2";
        ui->le_setpassword->setText(QString(str));
    }
}

void help::on_pb3_clicked()
{
    if(ui->le_setpassword->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_setpassword->text() + "3";
        ui->le_setpassword->setText(QString(str));
    }
}

void help::on_pb4_clicked()
{
    if(ui->le_setpassword->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_setpassword->text() + "4";
        ui->le_setpassword->setText(QString(str));
    }
}

void help::on_pb5_clicked()
{
    if(ui->le_setpassword->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_setpassword->text() + "5";
        ui->le_setpassword->setText(QString(str));
    }
}

void help::on_pb6_clicked()
{
    if(ui->le_setpassword->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_setpassword->text() + "6";
        ui->le_setpassword->setText(QString(str));
    }
}

void help::on_pb7_clicked()
{
    if(ui->le_setpassword->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_setpassword->text() + "7";
        ui->le_setpassword->setText(QString(str));
    }
}

void help::on_pb8_clicked()
{
    if(ui->le_setpassword->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_setpassword->text() + "8";
        ui->le_setpassword->setText(QString(str));
    }
}

void help::on_pb9_clicked()
{
    if(ui->le_setpassword->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_setpassword->text() + "9";
        ui->le_setpassword->setText(QString(str));
    }
}

void help::on_pb0_clicked()
{
    if(ui->le_setpassword->hasFocus())//输入框Tel焦点
    {
        QString str = ui->le_setpassword->text() + "0";
        ui->le_setpassword->setText(QString(str));
    }
}

void help::on_pbDelete_clicked()
{
    if(ui->le_setpassword->hasFocus())//输入框Username焦点
    {
        QString str = ui->le_setpassword->text();
        if(!(str.length()==1))
            str = str.left(str.length()-1);
        else str ="";
        ui->le_setpassword->setText(QString(str));
    }
}
