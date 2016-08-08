#include "sms.h"
#include <QDebug>
#include <QMessageBox>

//String字符串转换为Unicode格式
QString sms::stringToUnicode(QString qStrPasswd, QString qStrBoxnum)
{
    // 这里传来的字符串一定要加tr，main函数里可以加 QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    //  例如：str=tr("你好");
    QString str = "【智能快递箱】取件密码"+qStrPasswd+"，取件箱号"+qStrBoxnum+"。";
    qDebug()<<str;
    const QChar *q;
    QChar qtmp;
    QString str0, strout;
    int num;
    q=str.unicode();
    int len=str.count();
    for(int i=0;i<len;i++)
    {
        qtmp =(QChar)*q++;
        num= qtmp.unicode();
        if(num<255)
            strout+="00"; //英文或数字前加"00"
        str0=str0.setNum(num,16);//变成十六进制数
        strout+=str0;
    }
    int i=strout.length()/2;  //内容长度
    QString sHex;
    sHex.setNum(i,16);
    strout = sHex+strout;
    return strout;
}

//领取快递完毕发送领取确认领取短信
QString sms::stringToUnicode2(QString qStrNumber)
{
    // 这里传来的字符串一定要加tr，main函数里可以加 QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    //  例如：str=tr("你好");
    QString str = "【智能快递箱】您的快递"+qStrNumber+"已被领取。";
    qDebug()<<str;
    const QChar *q;
    QChar qtmp;
    QString str0, strout;
    int num;
    q=str.unicode();
    int len=str.count();
    for(int i=0;i<len;i++)
    {
        qtmp =(QChar)*q++;
        num= qtmp.unicode();
        if(num<255)
            strout+="00"; //英文或数字前加"00"
        str0=str0.setNum(num,16);//变成十六进制数
        strout+=str0;
    }
    int i=strout.length()/2;  //内容长度
    QString sHex;
    sHex.setNum(i,16);
    strout = sHex+strout;
    return strout;
}

//手机号码转换
QString sms::convertPhone(QString qStrPhone)
{
    int i=qStrPhone.length()+2;     //长度包括86
    QString sHex;
    sHex.setNum(i,16);      //转成十六进制
    if(sHex.length()==1)
    {
        sHex="0"+sHex;
    }
    if(qStrPhone.length()%2 !=0)  //为奇数位后面加F
    {
        qStrPhone+="F";
    }
    //奇数位偶数位交换
    QString qStrTemp2;
    for(int i=0; i<qStrPhone.length(); i+=2)
    {
        qStrTemp2 +=qStrPhone.mid(i+1,1)+qStrPhone.mid(i,1);
    }
    qStrTemp2="0891683108200805F011000D9168"+qStrTemp2+"000800";
    return qStrTemp2;
}
//短信内容长度
QString sms::smslength(QString qStrsms, QString qStrPhone)
{
    int i=qStrPhone.length()+2;     //长度包括86
    QString sHex;
    sHex.setNum(i,16);      //转成十六进制
    if(sHex.length()==1)
    {
        sHex="0"+sHex;
    }
    if(qStrPhone.length()%2 !=0)  //为奇数位后面加F
    {
        qStrPhone+="F";
    }
    //奇数位偶数位交换
    QString qStrTemp2;
    for(int i=0; i<qStrPhone.length(); i+=2)
    {
        qStrTemp2 +=qStrPhone.mid(i+1,1)+qStrPhone.mid(i,1);
    }
    QString Str = "11000D9168"+qStrTemp2+"000800"+qStrsms;
    int length=Str.length()/2;  //内容长度
    QString slen = QString::number(length, 10);
    return slen;
}

//设置发送短信串口
bool sms::setport()
{
    myCom = new Posix_QextSerialPort("/dev/ttyUSB0");
    if(myCom ->open(QIODevice::ReadWrite))//以读写方式打开串口
    {
        myCom->setBaudRate(BAUD115200); //波特率设置，我们设置为115200
        myCom->setDataBits(DATA_8); //数据位设置，我们设置为8位数据位
        myCom->setParity(PAR_NONE); //奇偶校验设置，我们设置为无校验
        myCom->setStopBits(STOP_1); //停止位设置，我们设置为1位停止位
        myCom->setFlowControl(FLOW_OFF); //数据流控制设置，我们设置为无数据流控制
        return true;
    }
    return false;
}

//发送短信过程
bool sms::sendsms(QString str,QString length)
{
    bool success;
    QString qStrCmd;
    QString qStrReceive;
    //AT
    qStrCmd= "AT\r";
    myCom->waitForBytesWritten(100);
    myCom->write(qStrCmd.toAscii());
    myCom->waitForReadyRead(100);
    qStrReceive = myCom->readAll();
    qDebug()<<qStrReceive;
    QString status = "ERROR";
    if(qStrReceive.indexOf(status) == -1)
    {
        success = true;
    }
    else
    {
        success =false;
    }
    //AT+CMGF=0
    if(success)
    {
        qStrCmd= "AT+CMGF=0\r";
        myCom->waitForBytesWritten(100);
        myCom->write(qStrCmd.toAscii());
        myCom->waitForReadyRead(100);
        qStrReceive = myCom->readAll();
        qDebug()<<qStrReceive;
        status = "ERROR";
        if(qStrReceive.indexOf(status) == -1)
        {
            success = true;
        }
        else
        {
            success =false;
        }
    }

    //AT+CMGS=length
    if(success)
    {
        qStrCmd="AT+CMGS=";
        qStrCmd+=length;
        qStrCmd+="\r";
        myCom->waitForBytesWritten(100);
        myCom->write(qStrCmd.toAscii());
        myCom->waitForReadyRead(100);
        qStrReceive = myCom->readAll();
        qDebug()<<qStrReceive;

        status = "ERROR";
        if(qStrReceive.indexOf(status) == -1)
        {
            success = true;
        }
        else
        {
            success =false;
        }
    }

    //Content
    if(success)
    {
        qStrCmd= str;
        myCom->waitForBytesWritten(100);
        myCom->write(qStrCmd.toAscii());
        qStrCmd= "\x01a";
        myCom->waitForBytesWritten(100);
        myCom->write(qStrCmd.toAscii());
        myCom->waitForReadyRead(100);
        qStrReceive = myCom->readAll();
        qDebug()<<qStrReceive;

        status = "ERROR";
        if(qStrReceive.indexOf(status)  ==  -1)
        {
            success = true;
        }
        else
        {
            success =false;
        }
    }
    return success;
}

void sms::closeport()
{
    myCom->close();
}


