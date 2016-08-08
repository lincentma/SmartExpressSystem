#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    //设置编码格式
    //设置编码，一般在Window开发环境里，是GBK编码，在Linux开发环境里，是utf-8编码
    //获取系统编码，否则移植会出现乱码
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    //设置和对本地文件系统读写时候的默认编码格式
    QTextCodec::setCodecForLocale(codec);
    //设置传给tr函数时的默认字符串编码
    QTextCodec::setCodecForTr(codec);
    //用在字符常量或者QByteArray构造QString对象时使用的一种编码方式
    QTextCodec::setCodecForCStrings(codec);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
