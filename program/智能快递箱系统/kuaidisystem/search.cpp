#include "search.h"
#include "ui_search.h"

#include "mainwindow.h"
#include "databaseconnection.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>


search::search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search)
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
    ui->pbSearch->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->pbReturn_search->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点

}

search::~search()
{
    delete ui;
}

void search::on_pbReturn_search_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    MainWindow *s = new MainWindow(this);
    s->show();
}

void search::on_pb0_clicked()
{
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "0";
        ui->leTel->setText(QString(str));
    }
}

void search::on_pb1_clicked()
{
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "1";
        ui->leTel->setText(QString(str));
    }
}

void search::on_pb2_clicked()
{
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "2";
        ui->leTel->setText(QString(str));
    }
}

void search::on_pb3_clicked()
{
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "3";
        ui->leTel->setText(QString(str));
    }
}

void search::on_pb4_clicked()
{
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "4";
        ui->leTel->setText(QString(str));
    }
}

void search::on_pb5_clicked()
{
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "5";
        ui->leTel->setText(QString(str));
    }
}

void search::on_pb6_clicked()
{
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "6";
        ui->leTel->setText(QString(str));
    }
}

void search::on_pb7_clicked()
{
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "7";
        ui->leTel->setText(QString(str));
    }
}

void search::on_pb8_clicked()
{
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "8";
        ui->leTel->setText(QString(str));
    }
}

void search::on_pb9_clicked()
{
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "9";
        ui->leTel->setText(QString(str));
    }
}

void search::on_pbDelete_clicked()
{
    if(ui->leTel->hasFocus())//输入框leTel焦点
    {
        QString str = ui->leTel->text();
        if(!(str.length()==1))
            str = str.left(str.length()-1);
        else str ="";
        ui->leTel->setText(QString(str));
    }
}

void search::on_pbSearch_clicked()
{
    bool success =false;
    QString stel = ui->leTel->text().trimmed();

    databaseconnection::setdatabase();
    databaseconnection::Open();

    if(ui->leTel->text().isEmpty())
    {
        QMessageBox::information(this,tr("提示"),tr("请输入手机号码！"),QMessageBox::Ok);
    }
    else
    {
        //判断手机号码是否存在
        QSqlQuery query;
        QString status = "arrived";
        if(query.exec("select * from receive where ReceiveStatus='"+status+"'"))
        {
            while(query.next())
            {
                if(stel==query.value(2).toString())
                {
                    success = true;
                    break;
                }
            }
        }
    }
    if(success)
    {
        ui->label_status->setText(tr("您的快递已经达到本快递箱，请返回领取界面输入密码领取快递！"));
    }
    else
    {
        ui->label_status->setText(tr("你输入的手机号码没有对应的快递到达本快递箱!\n请重新输入或查询相应物流信息！"));
        ui->leTel->clear();
    }
        databaseconnection::Close();
}
