#include "databaseconnection.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QFile>
#include <QSqlDatabase>
#include <QFile>
#include <QDir>

databaseconnection::databaseconnection()
{

}
//是否为默认连接

QSqlDatabase databaseconnection::db = QSqlDatabase::addDatabase("QSQLITE");
QString databaseconnection::databasename = "";


bool databaseconnection::Open()
{
    db.setDatabaseName(databasename);
    if(!db.open()){
        qDebug()<<databasename<<endl;
        qDebug()<<"Could not open the Database!"<<endl;
        qDebug()<<db.lastError().driverText()<<endl;
        return false;
    }else{
        qDebug()<<"Open file: "<<db.databaseName()<<" sucessfully!"<<endl;
        return true;
    }
}

void databaseconnection::Close()
{
    db.close();
}

void databaseconnection::setdatabase()
{
    QDir dir;
    QString path = dir.currentPath();
    path += "/database";
    QDir dir2(path);
    if(dir2.exists())
    {
        dir2.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
        dir2.setSorting(QDir::Size | QDir::Reversed);
        QFileInfoList list = dir2.entryInfoList();
        QFileInfo fileInfo = list.at(0);
        QString dbname = fileInfo.fileName();
        databasename = path+"/"+dbname;
        qDebug()<<dbname;
        qDebug()<<path;
    }
}
