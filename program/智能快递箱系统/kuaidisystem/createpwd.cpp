#include "createpwd.h"
#include <QTime>
#include <QString>

createpassword::createpassword()
{
}

QString createpassword::createpwd()
{
    //产生6位随机数
    QString retStr = "";
    int len =6;
    QTime t;
    t= QTime::currentTime();
    qsrand(t.msec()+t.second()*1000);
    for(int i =0 ;i<len; i++)
    {
        int Rnum = qrand()%10;
        QString RNumber = QString::number(Rnum,10);
        retStr += RNumber;
    }
    return retStr;
}
