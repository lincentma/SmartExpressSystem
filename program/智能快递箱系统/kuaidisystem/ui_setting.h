/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created: Wed Jun 17 14:08:09 2015
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setting
{
public:
    QSplitter *splitter_2;
    QLabel *label_name;
    QLineEdit *le_name;
    QSplitter *splitter_4;
    QLabel *label_middle;
    QLineEdit *le_middle;
    QSplitter *splitter_5;
    QLabel *label_small;
    QLineEdit *le_small;
    QSplitter *splitter_3;
    QLabel *label_big;
    QLineEdit *le_big;
    QPushButton *pb_create;
    QPushButton *pb_return;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pb8;
    QPushButton *pb9;
    QPushButton *pb3;
    QPushButton *pbDelete;
    QPushButton *pb0;
    QPushButton *pb2;
    QPushButton *pb6;
    QPushButton *pb7;
    QPushButton *pb5;
    QPushButton *pb4;
    QPushButton *pb1;
    QPushButton *pbpoint;
    QSplitter *splitter;
    QLabel *label_ip;
    QLineEdit *le_ip;

    void setupUi(QDialog *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName(QString::fromUtf8("setting"));
        setting->resize(480, 240);
        splitter_2 = new QSplitter(setting);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(0, 30, 461, 21));
        splitter_2->setOrientation(Qt::Horizontal);
        label_name = new QLabel(splitter_2);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        splitter_2->addWidget(label_name);
        le_name = new QLineEdit(splitter_2);
        le_name->setObjectName(QString::fromUtf8("le_name"));
        splitter_2->addWidget(le_name);
        splitter_4 = new QSplitter(setting);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setGeometry(QRect(160, 60, 141, 21));
        splitter_4->setOrientation(Qt::Horizontal);
        label_middle = new QLabel(splitter_4);
        label_middle->setObjectName(QString::fromUtf8("label_middle"));
        splitter_4->addWidget(label_middle);
        le_middle = new QLineEdit(splitter_4);
        le_middle->setObjectName(QString::fromUtf8("le_middle"));
        splitter_4->addWidget(le_middle);
        splitter_5 = new QSplitter(setting);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setGeometry(QRect(320, 60, 141, 21));
        splitter_5->setOrientation(Qt::Horizontal);
        label_small = new QLabel(splitter_5);
        label_small->setObjectName(QString::fromUtf8("label_small"));
        splitter_5->addWidget(label_small);
        le_small = new QLineEdit(splitter_5);
        le_small->setObjectName(QString::fromUtf8("le_small"));
        splitter_5->addWidget(le_small);
        splitter_3 = new QSplitter(setting);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(10, 60, 131, 21));
        splitter_3->setOrientation(Qt::Horizontal);
        label_big = new QLabel(splitter_3);
        label_big->setObjectName(QString::fromUtf8("label_big"));
        splitter_3->addWidget(label_big);
        le_big = new QLineEdit(splitter_3);
        le_big->setObjectName(QString::fromUtf8("le_big"));
        splitter_3->addWidget(le_big);
        pb_create = new QPushButton(setting);
        pb_create->setObjectName(QString::fromUtf8("pb_create"));
        pb_create->setGeometry(QRect(310, 210, 146, 25));
        pb_return = new QPushButton(setting);
        pb_return->setObjectName(QString::fromUtf8("pb_return"));
        pb_return->setGeometry(QRect(10, 211, 146, 25));
        widget = new QWidget(setting);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 90, 451, 111));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pb8 = new QPushButton(widget);
        pb8->setObjectName(QString::fromUtf8("pb8"));

        gridLayout->addWidget(pb8, 2, 1, 1, 1);

        pb9 = new QPushButton(widget);
        pb9->setObjectName(QString::fromUtf8("pb9"));

        gridLayout->addWidget(pb9, 2, 2, 1, 1);

        pb3 = new QPushButton(widget);
        pb3->setObjectName(QString::fromUtf8("pb3"));

        gridLayout->addWidget(pb3, 0, 2, 1, 1);

        pbDelete = new QPushButton(widget);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));
        pbDelete->setEnabled(true);

        gridLayout->addWidget(pbDelete, 3, 0, 1, 1);

        pb0 = new QPushButton(widget);
        pb0->setObjectName(QString::fromUtf8("pb0"));

        gridLayout->addWidget(pb0, 3, 1, 1, 1);

        pb2 = new QPushButton(widget);
        pb2->setObjectName(QString::fromUtf8("pb2"));

        gridLayout->addWidget(pb2, 0, 1, 1, 1);

        pb6 = new QPushButton(widget);
        pb6->setObjectName(QString::fromUtf8("pb6"));

        gridLayout->addWidget(pb6, 1, 2, 1, 1);

        pb7 = new QPushButton(widget);
        pb7->setObjectName(QString::fromUtf8("pb7"));

        gridLayout->addWidget(pb7, 2, 0, 1, 1);

        pb5 = new QPushButton(widget);
        pb5->setObjectName(QString::fromUtf8("pb5"));

        gridLayout->addWidget(pb5, 1, 1, 1, 1);

        pb4 = new QPushButton(widget);
        pb4->setObjectName(QString::fromUtf8("pb4"));

        gridLayout->addWidget(pb4, 1, 0, 1, 1);

        pb1 = new QPushButton(widget);
        pb1->setObjectName(QString::fromUtf8("pb1"));

        gridLayout->addWidget(pb1, 0, 0, 1, 1);

        pbpoint = new QPushButton(widget);
        pbpoint->setObjectName(QString::fromUtf8("pbpoint"));

        gridLayout->addWidget(pbpoint, 3, 2, 1, 1);

        splitter = new QSplitter(setting);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(0, 1, 461, 20));
        splitter->setOrientation(Qt::Horizontal);
        label_ip = new QLabel(splitter);
        label_ip->setObjectName(QString::fromUtf8("label_ip"));
        splitter->addWidget(label_ip);
        le_ip = new QLineEdit(splitter);
        le_ip->setObjectName(QString::fromUtf8("le_ip"));
        splitter->addWidget(le_ip);

        retranslateUi(setting);

        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QDialog *setting)
    {
        setting->setWindowTitle(QApplication::translate("setting", "\347\263\273\347\273\237\350\256\276\347\275\256\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label_name->setText(QApplication::translate("setting", "       \345\277\253\351\200\222\347\256\261\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        label_middle->setText(QApplication::translate("setting", "\344\270\255\345\217\267\347\256\261\345\255\220", 0, QApplication::UnicodeUTF8));
        label_small->setText(QApplication::translate("setting", "\345\260\217\345\217\267\347\256\261\345\255\220", 0, QApplication::UnicodeUTF8));
        label_big->setText(QApplication::translate("setting", "\345\244\247\345\217\267\347\256\261\345\255\220", 0, QApplication::UnicodeUTF8));
        pb_create->setText(QApplication::translate("setting", "\345\256\214\346\210\220\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        pb_return->setText(QApplication::translate("setting", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        pb8->setText(QApplication::translate("setting", "8", 0, QApplication::UnicodeUTF8));
        pb9->setText(QApplication::translate("setting", "9", 0, QApplication::UnicodeUTF8));
        pb3->setText(QApplication::translate("setting", "3", 0, QApplication::UnicodeUTF8));
        pbDelete->setText(QApplication::translate("setting", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pb0->setText(QApplication::translate("setting", "0", 0, QApplication::UnicodeUTF8));
        pb2->setText(QApplication::translate("setting", "2", 0, QApplication::UnicodeUTF8));
        pb6->setText(QApplication::translate("setting", "6", 0, QApplication::UnicodeUTF8));
        pb7->setText(QApplication::translate("setting", "7", 0, QApplication::UnicodeUTF8));
        pb5->setText(QApplication::translate("setting", "5", 0, QApplication::UnicodeUTF8));
        pb4->setText(QApplication::translate("setting", "4", 0, QApplication::UnicodeUTF8));
        pb1->setText(QApplication::translate("setting", "1", 0, QApplication::UnicodeUTF8));
        pbpoint->setText(QApplication::translate("setting", ".", 0, QApplication::UnicodeUTF8));
        label_ip->setText(QApplication::translate("setting", "        \346\234\215\345\212\241\345\231\250IP", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
