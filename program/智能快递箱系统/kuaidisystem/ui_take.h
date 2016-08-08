/********************************************************************************
** Form generated from reading UI file 'take.ui'
**
** Created: Wed Jun 17 14:08:09 2015
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAKE_H
#define UI_TAKE_H

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

class Ui_take
{
public:
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_keyboard_take;
    QPushButton *pb7;
    QPushButton *pb9;
    QPushButton *pb5;
    QPushButton *pb1;
    QPushButton *pb6;
    QPushButton *pb8;
    QPushButton *pb4;
    QPushButton *pb2;
    QPushButton *pb3;
    QPushButton *pbDelete;
    QPushButton *pb0;
    QPushButton *pbReturn_take;
    QSplitter *splitter_take;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_take;
    QLabel *label_statustitle;
    QLabel *label_status;
    QLabel *label_PassWord;
    QLineEdit *lePassWord;
    QPushButton *pbOK;

    void setupUi(QDialog *take)
    {
        if (take->objectName().isEmpty())
            take->setObjectName(QString::fromUtf8("take"));
        take->resize(480, 240);
        layoutWidget_2 = new QWidget(take);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 90, 461, 141));
        gridLayout_keyboard_take = new QGridLayout(layoutWidget_2);
        gridLayout_keyboard_take->setObjectName(QString::fromUtf8("gridLayout_keyboard_take"));
        gridLayout_keyboard_take->setContentsMargins(0, 0, 0, 0);
        pb7 = new QPushButton(layoutWidget_2);
        pb7->setObjectName(QString::fromUtf8("pb7"));

        gridLayout_keyboard_take->addWidget(pb7, 2, 0, 1, 1);

        pb9 = new QPushButton(layoutWidget_2);
        pb9->setObjectName(QString::fromUtf8("pb9"));

        gridLayout_keyboard_take->addWidget(pb9, 2, 2, 1, 1);

        pb5 = new QPushButton(layoutWidget_2);
        pb5->setObjectName(QString::fromUtf8("pb5"));

        gridLayout_keyboard_take->addWidget(pb5, 1, 1, 1, 1);

        pb1 = new QPushButton(layoutWidget_2);
        pb1->setObjectName(QString::fromUtf8("pb1"));

        gridLayout_keyboard_take->addWidget(pb1, 0, 0, 1, 1);

        pb6 = new QPushButton(layoutWidget_2);
        pb6->setObjectName(QString::fromUtf8("pb6"));

        gridLayout_keyboard_take->addWidget(pb6, 1, 2, 1, 1);

        pb8 = new QPushButton(layoutWidget_2);
        pb8->setObjectName(QString::fromUtf8("pb8"));

        gridLayout_keyboard_take->addWidget(pb8, 2, 1, 1, 1);

        pb4 = new QPushButton(layoutWidget_2);
        pb4->setObjectName(QString::fromUtf8("pb4"));

        gridLayout_keyboard_take->addWidget(pb4, 1, 0, 1, 1);

        pb2 = new QPushButton(layoutWidget_2);
        pb2->setObjectName(QString::fromUtf8("pb2"));

        gridLayout_keyboard_take->addWidget(pb2, 0, 1, 1, 1);

        pb3 = new QPushButton(layoutWidget_2);
        pb3->setObjectName(QString::fromUtf8("pb3"));

        gridLayout_keyboard_take->addWidget(pb3, 0, 2, 1, 1);

        pbDelete = new QPushButton(layoutWidget_2);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));

        gridLayout_keyboard_take->addWidget(pbDelete, 3, 0, 1, 1);

        pb0 = new QPushButton(layoutWidget_2);
        pb0->setObjectName(QString::fromUtf8("pb0"));

        gridLayout_keyboard_take->addWidget(pb0, 3, 1, 1, 1);

        pbReturn_take = new QPushButton(layoutWidget_2);
        pbReturn_take->setObjectName(QString::fromUtf8("pbReturn_take"));

        gridLayout_keyboard_take->addWidget(pbReturn_take, 3, 2, 1, 1);

        pb5->raise();
        pb7->raise();
        pb2->raise();
        pb3->raise();
        pb8->raise();
        pb9->raise();
        pb1->raise();
        pb6->raise();
        pb4->raise();
        pbDelete->raise();
        pb0->raise();
        pbReturn_take->raise();
        splitter_take = new QSplitter(take);
        splitter_take->setObjectName(QString::fromUtf8("splitter_take"));
        splitter_take->setGeometry(QRect(10, 10, 461, 71));
        splitter_take->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter_take);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_take = new QGridLayout(layoutWidget);
        gridLayout_take->setObjectName(QString::fromUtf8("gridLayout_take"));
        gridLayout_take->setContentsMargins(0, 0, 0, 0);
        label_statustitle = new QLabel(layoutWidget);
        label_statustitle->setObjectName(QString::fromUtf8("label_statustitle"));

        gridLayout_take->addWidget(label_statustitle, 1, 0, 1, 1);

        label_status = new QLabel(layoutWidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));

        gridLayout_take->addWidget(label_status, 1, 1, 1, 1);

        label_PassWord = new QLabel(layoutWidget);
        label_PassWord->setObjectName(QString::fromUtf8("label_PassWord"));

        gridLayout_take->addWidget(label_PassWord, 0, 0, 1, 1);

        lePassWord = new QLineEdit(layoutWidget);
        lePassWord->setObjectName(QString::fromUtf8("lePassWord"));

        gridLayout_take->addWidget(lePassWord, 0, 1, 1, 1);

        splitter_take->addWidget(layoutWidget);
        pbOK = new QPushButton(splitter_take);
        pbOK->setObjectName(QString::fromUtf8("pbOK"));
        splitter_take->addWidget(pbOK);

        retranslateUi(take);

        QMetaObject::connectSlotsByName(take);
    } // setupUi

    void retranslateUi(QDialog *take)
    {
        take->setWindowTitle(QApplication::translate("take", "\351\242\206\345\217\226\345\277\253\351\200\222\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        pb7->setText(QApplication::translate("take", "7", 0, QApplication::UnicodeUTF8));
        pb9->setText(QApplication::translate("take", "9", 0, QApplication::UnicodeUTF8));
        pb5->setText(QApplication::translate("take", "5", 0, QApplication::UnicodeUTF8));
        pb1->setText(QApplication::translate("take", "1", 0, QApplication::UnicodeUTF8));
        pb6->setText(QApplication::translate("take", "6", 0, QApplication::UnicodeUTF8));
        pb8->setText(QApplication::translate("take", "8", 0, QApplication::UnicodeUTF8));
        pb4->setText(QApplication::translate("take", "4", 0, QApplication::UnicodeUTF8));
        pb2->setText(QApplication::translate("take", "2", 0, QApplication::UnicodeUTF8));
        pb3->setText(QApplication::translate("take", "3", 0, QApplication::UnicodeUTF8));
        pbDelete->setText(QApplication::translate("take", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pb0->setText(QApplication::translate("take", "0", 0, QApplication::UnicodeUTF8));
        pbReturn_take->setText(QApplication::translate("take", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label_statustitle->setText(QApplication::translate("take", "\351\242\206\345\217\226\347\273\223\346\236\234", 0, QApplication::UnicodeUTF8));
        label_status->setText(QString());
        label_PassWord->setText(QApplication::translate("take", "\351\242\206\345\217\226\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        pbOK->setText(QApplication::translate("take", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class take: public Ui_take {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAKE_H
