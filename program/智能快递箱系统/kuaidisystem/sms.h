#ifndef SMS
#define SMS

#include "posix_qextserialport.h"
#include <QString>

class sms {
public:
    bool setport();
    void closeport();
    QString convertPhone(QString qStrPhone);
    QString stringToUnicode(QString qStrPasswd, QString qStrBoxnum);
    QString stringToUnicode2(QString qStrNumber);
    QString smslength(QString qStrsms, QString qStrPhone);
    bool sendsms(QString str,QString length);
    Posix_QextSerialPort *myCom;

};

#endif // SMS

