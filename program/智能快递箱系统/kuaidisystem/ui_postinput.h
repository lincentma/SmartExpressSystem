/********************************************************************************
** Form generated from reading UI file 'postinput.ui'
**
** Created: Wed Jun 17 14:08:09 2015
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTINPUT_H
#define UI_POSTINPUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_postinput
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_keyboard_postinput;
    QPushButton *pb1;
    QPushButton *pb7;
    QPushButton *pb2;
    QPushButton *pb3;
    QPushButton *pb8;
    QPushButton *pb9;
    QPushButton *pb5;
    QPushButton *pb6;
    QPushButton *pb4;
    QPushButton *pbReturn;
    QPushButton *pbDelete;
    QPushButton *pb0;
    QSplitter *splitter_3_postinput;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_postinput;
    QSplitter *splitter_postinput;
    QLabel *label_ID;
    QLineEdit *leID;
    QSplitter *splitter_2_postinput;
    QLabel *label_Tel;
    QLineEdit *leTel;
    QHBoxLayout *horizontalLayout_postinput;
    QCheckBox *cbBig;
    QCheckBox *cbMiddle;
    QCheckBox *cbSmall;
    QPushButton *pbOK;

    void setupUi(QDialog *postinput)
    {
        if (postinput->objectName().isEmpty())
            postinput->setObjectName(QString::fromUtf8("postinput"));
        postinput->resize(480, 240);
        layoutWidget = new QWidget(postinput);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 461, 131));
        gridLayout_keyboard_postinput = new QGridLayout(layoutWidget);
        gridLayout_keyboard_postinput->setObjectName(QString::fromUtf8("gridLayout_keyboard_postinput"));
        gridLayout_keyboard_postinput->setContentsMargins(0, 0, 0, 0);
        pb1 = new QPushButton(layoutWidget);
        pb1->setObjectName(QString::fromUtf8("pb1"));

        gridLayout_keyboard_postinput->addWidget(pb1, 0, 0, 1, 1);

        pb7 = new QPushButton(layoutWidget);
        pb7->setObjectName(QString::fromUtf8("pb7"));

        gridLayout_keyboard_postinput->addWidget(pb7, 2, 0, 1, 1);

        pb2 = new QPushButton(layoutWidget);
        pb2->setObjectName(QString::fromUtf8("pb2"));

        gridLayout_keyboard_postinput->addWidget(pb2, 0, 1, 1, 1);

        pb3 = new QPushButton(layoutWidget);
        pb3->setObjectName(QString::fromUtf8("pb3"));

        gridLayout_keyboard_postinput->addWidget(pb3, 0, 2, 1, 1);

        pb8 = new QPushButton(layoutWidget);
        pb8->setObjectName(QString::fromUtf8("pb8"));

        gridLayout_keyboard_postinput->addWidget(pb8, 2, 1, 1, 1);

        pb9 = new QPushButton(layoutWidget);
        pb9->setObjectName(QString::fromUtf8("pb9"));

        gridLayout_keyboard_postinput->addWidget(pb9, 2, 2, 1, 1);

        pb5 = new QPushButton(layoutWidget);
        pb5->setObjectName(QString::fromUtf8("pb5"));

        gridLayout_keyboard_postinput->addWidget(pb5, 1, 1, 1, 1);

        pb6 = new QPushButton(layoutWidget);
        pb6->setObjectName(QString::fromUtf8("pb6"));

        gridLayout_keyboard_postinput->addWidget(pb6, 1, 2, 1, 1);

        pb4 = new QPushButton(layoutWidget);
        pb4->setObjectName(QString::fromUtf8("pb4"));

        gridLayout_keyboard_postinput->addWidget(pb4, 1, 0, 1, 1);

        pbReturn = new QPushButton(layoutWidget);
        pbReturn->setObjectName(QString::fromUtf8("pbReturn"));

        gridLayout_keyboard_postinput->addWidget(pbReturn, 3, 2, 1, 1);

        pbDelete = new QPushButton(layoutWidget);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));
        pbDelete->setEnabled(true);
        pbDelete->setMinimumSize(QSize(110, 27));

        gridLayout_keyboard_postinput->addWidget(pbDelete, 3, 0, 1, 1);

        pb0 = new QPushButton(layoutWidget);
        pb0->setObjectName(QString::fromUtf8("pb0"));

        gridLayout_keyboard_postinput->addWidget(pb0, 3, 1, 1, 1);

        splitter_3_postinput = new QSplitter(postinput);
        splitter_3_postinput->setObjectName(QString::fromUtf8("splitter_3_postinput"));
        splitter_3_postinput->setGeometry(QRect(10, 10, 461, 81));
        splitter_3_postinput->setOrientation(Qt::Horizontal);
        layoutWidget_2 = new QWidget(splitter_3_postinput);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        verticalLayout_postinput = new QVBoxLayout(layoutWidget_2);
        verticalLayout_postinput->setObjectName(QString::fromUtf8("verticalLayout_postinput"));
        verticalLayout_postinput->setContentsMargins(0, 0, 0, 0);
        splitter_postinput = new QSplitter(layoutWidget_2);
        splitter_postinput->setObjectName(QString::fromUtf8("splitter_postinput"));
        splitter_postinput->setOrientation(Qt::Horizontal);
        label_ID = new QLabel(splitter_postinput);
        label_ID->setObjectName(QString::fromUtf8("label_ID"));
        splitter_postinput->addWidget(label_ID);
        leID = new QLineEdit(splitter_postinput);
        leID->setObjectName(QString::fromUtf8("leID"));
        splitter_postinput->addWidget(leID);

        verticalLayout_postinput->addWidget(splitter_postinput);

        splitter_2_postinput = new QSplitter(layoutWidget_2);
        splitter_2_postinput->setObjectName(QString::fromUtf8("splitter_2_postinput"));
        splitter_2_postinput->setOrientation(Qt::Horizontal);
        label_Tel = new QLabel(splitter_2_postinput);
        label_Tel->setObjectName(QString::fromUtf8("label_Tel"));
        splitter_2_postinput->addWidget(label_Tel);
        leTel = new QLineEdit(splitter_2_postinput);
        leTel->setObjectName(QString::fromUtf8("leTel"));
        splitter_2_postinput->addWidget(leTel);

        verticalLayout_postinput->addWidget(splitter_2_postinput);

        horizontalLayout_postinput = new QHBoxLayout();
        horizontalLayout_postinput->setObjectName(QString::fromUtf8("horizontalLayout_postinput"));
        cbBig = new QCheckBox(layoutWidget_2);
        cbBig->setObjectName(QString::fromUtf8("cbBig"));

        horizontalLayout_postinput->addWidget(cbBig);

        cbMiddle = new QCheckBox(layoutWidget_2);
        cbMiddle->setObjectName(QString::fromUtf8("cbMiddle"));

        horizontalLayout_postinput->addWidget(cbMiddle);

        cbSmall = new QCheckBox(layoutWidget_2);
        cbSmall->setObjectName(QString::fromUtf8("cbSmall"));

        horizontalLayout_postinput->addWidget(cbSmall);


        verticalLayout_postinput->addLayout(horizontalLayout_postinput);

        splitter_3_postinput->addWidget(layoutWidget_2);
        pbOK = new QPushButton(splitter_3_postinput);
        pbOK->setObjectName(QString::fromUtf8("pbOK"));
        splitter_3_postinput->addWidget(pbOK);

        retranslateUi(postinput);

        QMetaObject::connectSlotsByName(postinput);
    } // setupUi

    void retranslateUi(QDialog *postinput)
    {
        postinput->setWindowTitle(QApplication::translate("postinput", "\346\212\225\351\200\222\345\277\253\351\200\222\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        pb1->setText(QApplication::translate("postinput", "1", 0, QApplication::UnicodeUTF8));
        pb7->setText(QApplication::translate("postinput", "7", 0, QApplication::UnicodeUTF8));
        pb2->setText(QApplication::translate("postinput", "2", 0, QApplication::UnicodeUTF8));
        pb3->setText(QApplication::translate("postinput", "3", 0, QApplication::UnicodeUTF8));
        pb8->setText(QApplication::translate("postinput", "8", 0, QApplication::UnicodeUTF8));
        pb9->setText(QApplication::translate("postinput", "9", 0, QApplication::UnicodeUTF8));
        pb5->setText(QApplication::translate("postinput", "5", 0, QApplication::UnicodeUTF8));
        pb6->setText(QApplication::translate("postinput", "6", 0, QApplication::UnicodeUTF8));
        pb4->setText(QApplication::translate("postinput", "4", 0, QApplication::UnicodeUTF8));
        pbReturn->setText(QApplication::translate("postinput", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        pbDelete->setText(QApplication::translate("postinput", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pb0->setText(QApplication::translate("postinput", "0", 0, QApplication::UnicodeUTF8));
        label_ID->setText(QApplication::translate("postinput", "\345\277\253\351\200\222\345\215\225\345\217\267", 0, QApplication::UnicodeUTF8));
        label_Tel->setText(QApplication::translate("postinput", "\346\211\213\346\234\272\345\217\267\347\240\201", 0, QApplication::UnicodeUTF8));
        cbBig->setText(QApplication::translate("postinput", "\345\244\247\345\217\267\345\277\253\351\200\222\347\256\261", 0, QApplication::UnicodeUTF8));
        cbMiddle->setText(QApplication::translate("postinput", "\344\270\255\345\217\267\345\277\253\351\200\222\347\256\261", 0, QApplication::UnicodeUTF8));
        cbSmall->setText(QApplication::translate("postinput", "\345\260\217\345\217\267\345\277\253\351\200\222\347\256\261", 0, QApplication::UnicodeUTF8));
        pbOK->setText(QApplication::translate("postinput", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class postinput: public Ui_postinput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTINPUT_H
