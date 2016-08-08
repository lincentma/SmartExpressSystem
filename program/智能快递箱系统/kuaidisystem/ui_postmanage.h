/********************************************************************************
** Form generated from reading UI file 'postmanage.ui'
**
** Created: Wed Jun 17 14:08:09 2015
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTMANAGE_H
#define UI_POSTMANAGE_H

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

class Ui_postmanage
{
public:
    QSplitter *splitter;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_keyboard_postmanage;
    QLabel *label_UserName;
    QLabel *label_PassWord;
    QLineEdit *lePassWord;
    QLineEdit *leUserName;
    QPushButton *pbOK;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_input_postmanage;
    QPushButton *pb7;
    QPushButton *pb3;
    QPushButton *pb1;
    QPushButton *pb8;
    QPushButton *pb5;
    QPushButton *pb4;
    QPushButton *pb9;
    QPushButton *pb6;
    QPushButton *pb2;
    QPushButton *pbReturn_postmanage;
    QPushButton *pbDelete;
    QPushButton *pb0;

    void setupUi(QDialog *postmanage)
    {
        if (postmanage->objectName().isEmpty())
            postmanage->setObjectName(QString::fromUtf8("postmanage"));
        postmanage->resize(480, 240);
        splitter = new QSplitter(postmanage);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 10, 461, 61));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        gridLayout_keyboard_postmanage = new QGridLayout(layoutWidget_2);
        gridLayout_keyboard_postmanage->setObjectName(QString::fromUtf8("gridLayout_keyboard_postmanage"));
        gridLayout_keyboard_postmanage->setContentsMargins(0, 0, 0, 0);
        label_UserName = new QLabel(layoutWidget_2);
        label_UserName->setObjectName(QString::fromUtf8("label_UserName"));

        gridLayout_keyboard_postmanage->addWidget(label_UserName, 0, 0, 1, 1);

        label_PassWord = new QLabel(layoutWidget_2);
        label_PassWord->setObjectName(QString::fromUtf8("label_PassWord"));

        gridLayout_keyboard_postmanage->addWidget(label_PassWord, 2, 0, 1, 1);

        lePassWord = new QLineEdit(layoutWidget_2);
        lePassWord->setObjectName(QString::fromUtf8("lePassWord"));

        gridLayout_keyboard_postmanage->addWidget(lePassWord, 2, 1, 1, 1);

        leUserName = new QLineEdit(layoutWidget_2);
        leUserName->setObjectName(QString::fromUtf8("leUserName"));

        gridLayout_keyboard_postmanage->addWidget(leUserName, 0, 1, 1, 1);

        splitter->addWidget(layoutWidget_2);
        pbOK = new QPushButton(splitter);
        pbOK->setObjectName(QString::fromUtf8("pbOK"));
        splitter->addWidget(pbOK);
        layoutWidget = new QWidget(postmanage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 461, 141));
        gridLayout_input_postmanage = new QGridLayout(layoutWidget);
        gridLayout_input_postmanage->setObjectName(QString::fromUtf8("gridLayout_input_postmanage"));
        gridLayout_input_postmanage->setContentsMargins(0, 0, 0, 0);
        pb7 = new QPushButton(layoutWidget);
        pb7->setObjectName(QString::fromUtf8("pb7"));

        gridLayout_input_postmanage->addWidget(pb7, 2, 0, 1, 1);

        pb3 = new QPushButton(layoutWidget);
        pb3->setObjectName(QString::fromUtf8("pb3"));

        gridLayout_input_postmanage->addWidget(pb3, 0, 2, 1, 1);

        pb1 = new QPushButton(layoutWidget);
        pb1->setObjectName(QString::fromUtf8("pb1"));

        gridLayout_input_postmanage->addWidget(pb1, 0, 0, 1, 1);

        pb8 = new QPushButton(layoutWidget);
        pb8->setObjectName(QString::fromUtf8("pb8"));

        gridLayout_input_postmanage->addWidget(pb8, 2, 1, 1, 1);

        pb5 = new QPushButton(layoutWidget);
        pb5->setObjectName(QString::fromUtf8("pb5"));

        gridLayout_input_postmanage->addWidget(pb5, 1, 1, 1, 1);

        pb4 = new QPushButton(layoutWidget);
        pb4->setObjectName(QString::fromUtf8("pb4"));

        gridLayout_input_postmanage->addWidget(pb4, 1, 0, 1, 1);

        pb9 = new QPushButton(layoutWidget);
        pb9->setObjectName(QString::fromUtf8("pb9"));

        gridLayout_input_postmanage->addWidget(pb9, 2, 2, 1, 1);

        pb6 = new QPushButton(layoutWidget);
        pb6->setObjectName(QString::fromUtf8("pb6"));

        gridLayout_input_postmanage->addWidget(pb6, 1, 2, 1, 1);

        pb2 = new QPushButton(layoutWidget);
        pb2->setObjectName(QString::fromUtf8("pb2"));

        gridLayout_input_postmanage->addWidget(pb2, 0, 1, 1, 1);

        pbReturn_postmanage = new QPushButton(layoutWidget);
        pbReturn_postmanage->setObjectName(QString::fromUtf8("pbReturn_postmanage"));

        gridLayout_input_postmanage->addWidget(pbReturn_postmanage, 3, 2, 1, 1);

        pbDelete = new QPushButton(layoutWidget);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));

        gridLayout_input_postmanage->addWidget(pbDelete, 3, 0, 1, 1);

        pb0 = new QPushButton(layoutWidget);
        pb0->setObjectName(QString::fromUtf8("pb0"));

        gridLayout_input_postmanage->addWidget(pb0, 3, 1, 1, 1);


        retranslateUi(postmanage);

        QMetaObject::connectSlotsByName(postmanage);
    } // setupUi

    void retranslateUi(QDialog *postmanage)
    {
        postmanage->setWindowTitle(QApplication::translate("postmanage", "\345\277\253\351\200\222\345\221\230\347\231\273\351\231\206\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label_UserName->setText(QApplication::translate("postmanage", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        label_PassWord->setText(QApplication::translate("postmanage", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        pbOK->setText(QApplication::translate("postmanage", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        pb7->setText(QApplication::translate("postmanage", "7", 0, QApplication::UnicodeUTF8));
        pb3->setText(QApplication::translate("postmanage", "3", 0, QApplication::UnicodeUTF8));
        pb1->setText(QApplication::translate("postmanage", "1", 0, QApplication::UnicodeUTF8));
        pb8->setText(QApplication::translate("postmanage", "8", 0, QApplication::UnicodeUTF8));
        pb5->setText(QApplication::translate("postmanage", "5", 0, QApplication::UnicodeUTF8));
        pb4->setText(QApplication::translate("postmanage", "4", 0, QApplication::UnicodeUTF8));
        pb9->setText(QApplication::translate("postmanage", "9", 0, QApplication::UnicodeUTF8));
        pb6->setText(QApplication::translate("postmanage", "6", 0, QApplication::UnicodeUTF8));
        pb2->setText(QApplication::translate("postmanage", "2", 0, QApplication::UnicodeUTF8));
        pbReturn_postmanage->setText(QApplication::translate("postmanage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        pbDelete->setText(QApplication::translate("postmanage", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pb0->setText(QApplication::translate("postmanage", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class postmanage: public Ui_postmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTMANAGE_H
