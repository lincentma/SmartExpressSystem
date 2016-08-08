#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "postmanage.h"
#include "take.h"
#include "search.h"
#include "help.h"

#include <QTimer>
#include <QDateTime>
#include <QAbstractItemView>
#include <QPixmap>
#include <QDir>

//初始系统设置密码
QString settingpassword = "1234567";


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //显示系统时间
    QTimer *timer = new QTimer(this);   //新建定时器
    connect(timer,SIGNAL(timeout()),this,SLOT(xytimerUpDate()));//关联定时器计满信号和相应的槽函数
    timer->start(1000);//定时器开始计时，其中1000表示1000ms即1秒
    ui->lcdNumber_time->setNumDigits(28);//lcd显示位数20位，默认为5位不够；

    //显示图片
    QImage *image=new QImage();
    image->load(":/picture/image/SWJTU.png");
    QGraphicsScene *scene = new QGraphicsScene;
    scene->addPixmap(QPixmap::fromImage(*image));
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();

//    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏

//    connect(helpui.pbReturn_help,SIGNAL(closed()),this,SLOT(show()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbPost_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose, true);
    postmanage *dlg1 = new postmanage(this);
    dlg1->show();
}

void MainWindow::on_pbTake_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose, true);
    take *dlg2 = new take(this);
    dlg2->show();
}

void MainWindow::on_pbSearch_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose, true);
    search *dlg3 = new search(this);
    dlg3->show();
}

void MainWindow::on_pbHelp_clicked()
{
    this->close();
    this->setAttribute(Qt::WA_DeleteOnClose, true);
    help *dlg4 = new help(this);
    dlg4->show();
}

void MainWindow::xytimerUpDate()
{
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString strTime = time.toString("yyyy-MM-dd hh:mm:ss dddd");//设置系统时间显示格式
    ui->lcdNumber_time->display(strTime);//在lcdNumber上显示时间
}

