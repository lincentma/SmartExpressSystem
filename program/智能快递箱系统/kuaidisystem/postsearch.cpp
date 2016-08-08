#include "postsearch.h"
#include "ui_postsearch.h"
#include "databaseconnection.h"

#include "postoperation.h"
#include <QMessageBox>
#include <QDebug>

postsearch::postsearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::postsearch)
{
    ui->setupUi(this);
    databaseconnection::setdatabase();
    databaseconnection::Open();
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
    ui->pbReturn->setFocusPolicy(Qt::NoFocus);//设置按钮无焦点
    ui->leNumber->setFocus();

    //设置tableview显示信息
    postsearch_mdel = new QSqlTableModel (this);
    postsearch_mdel->setTable("post");//绑定数据库
    postsearch_mdel ->setEditStrategy(QSqlTableModel::OnManualSubmit);//修改提交之后更新到数据库
    //设置显示列
    postsearch_mdel->setHeaderData(0,Qt::Horizontal,tr("快递单号"));
    postsearch_mdel->setHeaderData(1,Qt::Horizontal,tr("投递人员"));
    postsearch_mdel->setHeaderData(2,Qt::Horizontal,tr("投递状态"));
//    postsearch_mdel->select();
    postsearch_mdel->removeColumn(this->postsearch_mdel->fieldIndex("PostBox"));//隐藏列设置
    postsearch_mdel->removeColumn(this->postsearch_mdel->fieldIndex("PostTime"));
    postsearch_mdel->removeColumn(this->postsearch_mdel->fieldIndex("Tel"));
    ui->tvResuls->setModel(postsearch_mdel);
    ui->tvResuls->setEditTriggers(QAbstractItemView::NoEditTriggers);//使其不可编辑

}

postsearch::~postsearch()
{
    delete ui;
    databaseconnection::Close();
}

void postsearch::on_pbReturn_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    postoperation *p= new postoperation(this);
    p->show();
}

void postsearch::on_pb0_clicked()
{
    if(ui->leNumber->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->leNumber->text() + "0";
        ui->leNumber->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "0";
        ui->leTel->setText(QString(str));
    }
}

void postsearch::on_pb1_clicked()
{
    if(ui->leNumber->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->leNumber->text() + "1";
        ui->leNumber->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "1";
        ui->leTel->setText(QString(str));
    }
}

void postsearch::on_pb2_clicked()
{
    if(ui->leNumber->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->leNumber->text() + "2";
        ui->leNumber->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "2";
        ui->leTel->setText(QString(str));
    }
}

void postsearch::on_pb3_clicked()
{
    if(ui->leNumber->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->leNumber->text() + "3";
        ui->leNumber->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "3";
        ui->leTel->setText(QString(str));
    }
}

void postsearch::on_pb4_clicked()
{
    if(ui->leNumber->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->leNumber->text() + "4";
        ui->leNumber->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "4";
        ui->leTel->setText(QString(str));
    }
}

void postsearch::on_pb5_clicked()
{
    if(ui->leNumber->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->leNumber->text() + "5";
        ui->leNumber->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "5";
        ui->leTel->setText(QString(str));
    }
}

void postsearch::on_pb6_clicked()
{
    if(ui->leNumber->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->leNumber->text() + "6";
        ui->leNumber->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "6";
        ui->leTel->setText(QString(str));
    }
}

void postsearch::on_pb7_clicked()
{
    if(ui->leNumber->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->leNumber->text() + "7";
        ui->leNumber->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "7";
        ui->leTel->setText(QString(str));
    }
}

void postsearch::on_pb8_clicked()
{
    if(ui->leNumber->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->leNumber->text() + "8";
        ui->leNumber->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "8";
        ui->leTel->setText(QString(str));
    }
}

void postsearch::on_pb9_clicked()
{
    if(ui->leNumber->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->leNumber->text() + "9";
        ui->leNumber->setText(QString(str));
    }
    if(ui->leTel->hasFocus())//输入框Tel焦点
    {
        QString str = ui->leTel->text() + "9";
        ui->leTel->setText(QString(str));
    }
}

void postsearch::on_pbDelete_clicked()
{
    if(ui->leNumber->hasFocus())//输入框leNumber焦点
    {
        QString str = ui->leNumber->text();
        if(!(str.length()==1))
            str = str.left(str.length()-1);
        else str ="";
        ui->leNumber->setText(QString(str));
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

void postsearch::on_pbSearch_clicked()
{
    QString number = ui->leNumber->text().trimmed();
    QString tel = ui->leTel->text().trimmed();
    if(ui->cbNumber->isChecked())
    {
            if(ui->leNumber->text().isEmpty())
            {
                QMessageBox::information(this,tr("提示"),tr("请输入快递单号！"),QMessageBox::Ok);
            }
            else
            {
                ui->leTel->clear();
                this->postsearch_mdel->setFilter(QObject::tr("number=%1").arg(number));//设置视图过滤器
                this->postsearch_mdel->select();//执行过滤操作
                ui->tvResuls->setModel(postsearch_mdel);//视图显示信息
                QString  dataName = QSqlDatabase::database().connectionName();
                qDebug()<<dataName;
            }
    }
    if(ui->cbTel->isChecked())
    {
        if(ui->leTel->text().isEmpty())
        {
            QMessageBox::information(this,tr("提示"),tr("请输入手机号码！"),QMessageBox::Ok);
        }
        else
        {
            ui->leNumber->clear();
            this->postsearch_mdel->setFilter(QObject::tr("tel=%1").arg(tel));//设置视图过滤器
            this->postsearch_mdel->select();//执行过滤操作
            ui->tvResuls->setModel(postsearch_mdel);//视图显示信息
            QString  dataName = QSqlDatabase::database().connectionName();
//            QSqlDatabase::removeDatabase("dataName");
            qDebug()<<dataName;
        }
    }
}

void postsearch::on_cbNumber_clicked()
{
    ui->cbNumber->setCheckable(true);
    ui->cbTel->setCheckable(false);
}

void postsearch::on_cbTel_clicked()
{
    ui->cbTel->setCheckable(true);
    ui->cbNumber->setCheckable(false);
}
