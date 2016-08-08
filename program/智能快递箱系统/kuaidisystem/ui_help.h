/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created: Wed Jun 17 14:08:09 2015
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_help
{
public:
    QTabWidget *Helpcontent;
    QWidget *tab_help1;
    QLabel *label_help;
    QWidget *tab_help2;
    QLabel *label_about;
    QWidget *tab_setting;
    QPushButton *pbSetting;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pb1;
    QPushButton *pb2;
    QPushButton *pb3;
    QPushButton *pb4;
    QPushButton *pb5;
    QPushButton *pb6;
    QPushButton *pb7;
    QPushButton *pb8;
    QPushButton *pb9;
    QPushButton *pbDelete;
    QPushButton *pb0;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_setpassword;
    QLineEdit *le_setpassword;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_help;
    QSpacerItem *horizontalSpacer_help;
    QPushButton *pbReturn_help;

    void setupUi(QDialog *help)
    {
        if (help->objectName().isEmpty())
            help->setObjectName(QString::fromUtf8("help"));
        help->resize(480, 240);
        Helpcontent = new QTabWidget(help);
        Helpcontent->setObjectName(QString::fromUtf8("Helpcontent"));
        Helpcontent->setGeometry(QRect(20, 10, 441, 181));
        tab_help1 = new QWidget();
        tab_help1->setObjectName(QString::fromUtf8("tab_help1"));
        label_help = new QLabel(tab_help1);
        label_help->setObjectName(QString::fromUtf8("label_help"));
        label_help->setGeometry(QRect(10, 0, 421, 171));
        Helpcontent->addTab(tab_help1, QString());
        tab_help2 = new QWidget();
        tab_help2->setObjectName(QString::fromUtf8("tab_help2"));
        label_about = new QLabel(tab_help2);
        label_about->setObjectName(QString::fromUtf8("label_about"));
        label_about->setGeometry(QRect(10, 10, 421, 141));
        Helpcontent->addTab(tab_help2, QString());
        tab_setting = new QWidget();
        tab_setting->setObjectName(QString::fromUtf8("tab_setting"));
        pbSetting = new QPushButton(tab_setting);
        pbSetting->setObjectName(QString::fromUtf8("pbSetting"));
        pbSetting->setGeometry(QRect(310, 110, 121, 30));
        widget = new QWidget(tab_setting);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 291, 131));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pb1 = new QPushButton(widget);
        pb1->setObjectName(QString::fromUtf8("pb1"));

        gridLayout->addWidget(pb1, 0, 0, 1, 1);

        pb2 = new QPushButton(widget);
        pb2->setObjectName(QString::fromUtf8("pb2"));

        gridLayout->addWidget(pb2, 0, 1, 1, 1);

        pb3 = new QPushButton(widget);
        pb3->setObjectName(QString::fromUtf8("pb3"));

        gridLayout->addWidget(pb3, 0, 2, 1, 1);

        pb4 = new QPushButton(widget);
        pb4->setObjectName(QString::fromUtf8("pb4"));

        gridLayout->addWidget(pb4, 1, 0, 1, 1);

        pb5 = new QPushButton(widget);
        pb5->setObjectName(QString::fromUtf8("pb5"));

        gridLayout->addWidget(pb5, 1, 1, 1, 1);

        pb6 = new QPushButton(widget);
        pb6->setObjectName(QString::fromUtf8("pb6"));

        gridLayout->addWidget(pb6, 1, 2, 1, 1);

        pb7 = new QPushButton(widget);
        pb7->setObjectName(QString::fromUtf8("pb7"));

        gridLayout->addWidget(pb7, 2, 0, 1, 1);

        pb8 = new QPushButton(widget);
        pb8->setObjectName(QString::fromUtf8("pb8"));

        gridLayout->addWidget(pb8, 2, 1, 1, 1);

        pb9 = new QPushButton(widget);
        pb9->setObjectName(QString::fromUtf8("pb9"));

        gridLayout->addWidget(pb9, 2, 2, 1, 1);

        pbDelete = new QPushButton(widget);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));
        pbDelete->setEnabled(true);

        gridLayout->addWidget(pbDelete, 3, 0, 1, 1);

        pb0 = new QPushButton(widget);
        pb0->setObjectName(QString::fromUtf8("pb0"));

        gridLayout->addWidget(pb0, 3, 1, 1, 1);

        widget1 = new QWidget(tab_setting);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(310, 10, 121, 55));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_setpassword = new QLabel(widget1);
        label_setpassword->setObjectName(QString::fromUtf8("label_setpassword"));

        verticalLayout->addWidget(label_setpassword);

        le_setpassword = new QLineEdit(widget1);
        le_setpassword->setObjectName(QString::fromUtf8("le_setpassword"));

        verticalLayout->addWidget(le_setpassword);

        Helpcontent->addTab(tab_setting, QString());
        layoutWidget = new QWidget(help);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 200, 441, 32));
        horizontalLayout_help = new QHBoxLayout(layoutWidget);
        horizontalLayout_help->setObjectName(QString::fromUtf8("horizontalLayout_help"));
        horizontalLayout_help->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_help = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_help->addItem(horizontalSpacer_help);

        pbReturn_help = new QPushButton(layoutWidget);
        pbReturn_help->setObjectName(QString::fromUtf8("pbReturn_help"));

        horizontalLayout_help->addWidget(pbReturn_help);


        retranslateUi(help);

        Helpcontent->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(help);
    } // setupUi

    void retranslateUi(QDialog *help)
    {
        help->setWindowTitle(QApplication::translate("help", "\345\270\256\345\212\251\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label_help->setText(QApplication::translate("help", "1\343\200\201\346\262\241\346\234\211\346\224\266\345\210\260\345\217\226\344\273\266\345\257\206\347\240\201\347\237\255\344\277\241\346\200\216\344\271\210\345\212\236\357\274\237\n"
"\345\217\257\344\273\245\346\213\250\346\211\223\345\256\242\346\234\215\347\224\265\350\257\23518200298768\350\277\233\350\241\214\345\222\250\350\257\242\345\244\204\347\220\206\343\200\202\n"
"2\343\200\201\344\270\215\347\237\245\351\201\223\345\277\253\351\200\222\346\230\257\345\220\246\350\276\276\345\210\260\357\274\237\n"
"\350\257\267\345\234\250\346\237\245\350\257\242\347\225\214\351\235\242\350\276\223\345\205\245\346\202\250\347\232\204\346\211\213\346\234\272\345\217\267\347\240\201\350\277\233\350\241\214\346\237\245\350\257\242\343\200\202\n"
"3\343\200\201\345\277\253\351\200\222\344\272\272\345\221\230\345\277\230\350\256\260\345\257\206\347\240\201\346\200\216\344\271\210\345\212\236\357\274\237\n"
"\350\257\267\350\201\224\347\263\273\345\256\242\346\234\215\344\272\272\345\221\230\350\277\233\350\241\214\351"
                        "\207\215\347\275\256\345\257\206\347\240\201\346\223\215\344\275\234\343\200\202\n"
"4\343\200\201B1\350\241\250\347\244\272\345\244\247\345\217\267\347\256\2611\345\217\267\357\274\214M1\350\241\250\347\244\272\344\270\255\345\217\267\347\256\2611\345\217\267\357\274\214S1\350\241\250\347\244\272\345\260\217\345\217\267\347\256\2611\345\217\267\343\200\202\n"
"\345\246\202\346\234\211\346\233\264\345\244\232\347\226\221\351\227\256\357\274\214\350\257\267\350\207\264\347\224\265\345\256\242\346\210\267\346\234\215\345\212\241\347\203\255\347\272\27718200298768\357\274\201", 0, QApplication::UnicodeUTF8));
        Helpcontent->setTabText(Helpcontent->indexOf(tab_help1), QApplication::translate("help", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        label_about->setText(QApplication::translate("help", "\346\231\272\350\203\275\345\277\253\351\200\222\347\256\261\347\263\273\347\273\237 v1.0\n"
"\351\251\254\345\207\214\n"
"\350\245\277\345\215\227\344\272\244\351\200\232\345\244\247\345\255\246\344\277\241\346\201\257\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257\345\255\246\351\231\242\350\256\241\347\256\227\346\234\272\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257\344\270\223\344\270\232 \n"
"20112399\n"
"253653617@qq.com", 0, QApplication::UnicodeUTF8));
        Helpcontent->setTabText(Helpcontent->indexOf(tab_help2), QApplication::translate("help", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        pbSetting->setText(QApplication::translate("help", "\350\277\233\345\205\245\347\263\273\347\273\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        pb1->setText(QApplication::translate("help", "1", 0, QApplication::UnicodeUTF8));
        pb2->setText(QApplication::translate("help", "2", 0, QApplication::UnicodeUTF8));
        pb3->setText(QApplication::translate("help", "3", 0, QApplication::UnicodeUTF8));
        pb4->setText(QApplication::translate("help", "4", 0, QApplication::UnicodeUTF8));
        pb5->setText(QApplication::translate("help", "5", 0, QApplication::UnicodeUTF8));
        pb6->setText(QApplication::translate("help", "6", 0, QApplication::UnicodeUTF8));
        pb7->setText(QApplication::translate("help", "7", 0, QApplication::UnicodeUTF8));
        pb8->setText(QApplication::translate("help", "8", 0, QApplication::UnicodeUTF8));
        pb9->setText(QApplication::translate("help", "9", 0, QApplication::UnicodeUTF8));
        pbDelete->setText(QApplication::translate("help", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pb0->setText(QApplication::translate("help", "0", 0, QApplication::UnicodeUTF8));
        label_setpassword->setText(QApplication::translate("help", "\347\263\273\347\273\237\350\256\276\347\275\256\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        Helpcontent->setTabText(Helpcontent->indexOf(tab_setting), QApplication::translate("help", "\347\263\273\347\273\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        pbReturn_help->setText(QApplication::translate("help", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class help: public Ui_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
