/********************************************************************************
** Form generated from reading UI file 'postsearch.ui'
**
** Created: Wed Jun 17 14:08:09 2015
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTSEARCH_H
#define UI_POSTSEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_postsearch
{
public:
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_keyboard_postsearch;
    QPushButton *pb1;
    QPushButton *pbDelete;
    QPushButton *pb0;
    QPushButton *pb7;
    QPushButton *pb2;
    QPushButton *pb3;
    QPushButton *pbReturn;
    QPushButton *pb9;
    QPushButton *pb8;
    QPushButton *pb4;
    QPushButton *pb5;
    QPushButton *pb6;
    QSplitter *splitter_5_postsearch;
    QSplitter *splitter_4_postsearch;
    QSplitter *splitter_3_postsearch;
    QSplitter *splitter_2_postsearch;
    QCheckBox *cbNumber;
    QLineEdit *leNumber;
    QSplitter *splitter_postsearch;
    QCheckBox *cbTel;
    QLineEdit *leTel;
    QPushButton *pbSearch;
    QTableView *tvResuls;

    void setupUi(QDialog *postsearch)
    {
        if (postsearch->objectName().isEmpty())
            postsearch->setObjectName(QString::fromUtf8("postsearch"));
        postsearch->resize(480, 240);
        layoutWidget_2 = new QWidget(postsearch);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 120, 461, 111));
        gridLayout_keyboard_postsearch = new QGridLayout(layoutWidget_2);
        gridLayout_keyboard_postsearch->setObjectName(QString::fromUtf8("gridLayout_keyboard_postsearch"));
        gridLayout_keyboard_postsearch->setContentsMargins(0, 0, 0, 0);
        pb1 = new QPushButton(layoutWidget_2);
        pb1->setObjectName(QString::fromUtf8("pb1"));

        gridLayout_keyboard_postsearch->addWidget(pb1, 0, 0, 1, 1);

        pbDelete = new QPushButton(layoutWidget_2);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));

        gridLayout_keyboard_postsearch->addWidget(pbDelete, 3, 0, 1, 1);

        pb0 = new QPushButton(layoutWidget_2);
        pb0->setObjectName(QString::fromUtf8("pb0"));

        gridLayout_keyboard_postsearch->addWidget(pb0, 3, 1, 1, 1);

        pb7 = new QPushButton(layoutWidget_2);
        pb7->setObjectName(QString::fromUtf8("pb7"));

        gridLayout_keyboard_postsearch->addWidget(pb7, 2, 0, 1, 1);

        pb2 = new QPushButton(layoutWidget_2);
        pb2->setObjectName(QString::fromUtf8("pb2"));

        gridLayout_keyboard_postsearch->addWidget(pb2, 0, 1, 1, 1);

        pb3 = new QPushButton(layoutWidget_2);
        pb3->setObjectName(QString::fromUtf8("pb3"));

        gridLayout_keyboard_postsearch->addWidget(pb3, 0, 2, 1, 1);

        pbReturn = new QPushButton(layoutWidget_2);
        pbReturn->setObjectName(QString::fromUtf8("pbReturn"));

        gridLayout_keyboard_postsearch->addWidget(pbReturn, 3, 2, 1, 1);

        pb9 = new QPushButton(layoutWidget_2);
        pb9->setObjectName(QString::fromUtf8("pb9"));

        gridLayout_keyboard_postsearch->addWidget(pb9, 2, 2, 1, 1);

        pb8 = new QPushButton(layoutWidget_2);
        pb8->setObjectName(QString::fromUtf8("pb8"));

        gridLayout_keyboard_postsearch->addWidget(pb8, 2, 1, 1, 1);

        pb4 = new QPushButton(layoutWidget_2);
        pb4->setObjectName(QString::fromUtf8("pb4"));

        gridLayout_keyboard_postsearch->addWidget(pb4, 1, 0, 1, 1);

        pb5 = new QPushButton(layoutWidget_2);
        pb5->setObjectName(QString::fromUtf8("pb5"));

        gridLayout_keyboard_postsearch->addWidget(pb5, 1, 1, 1, 1);

        pb6 = new QPushButton(layoutWidget_2);
        pb6->setObjectName(QString::fromUtf8("pb6"));

        gridLayout_keyboard_postsearch->addWidget(pb6, 1, 2, 1, 1);

        splitter_5_postsearch = new QSplitter(postsearch);
        splitter_5_postsearch->setObjectName(QString::fromUtf8("splitter_5_postsearch"));
        splitter_5_postsearch->setGeometry(QRect(10, 10, 461, 101));
        splitter_5_postsearch->setOrientation(Qt::Vertical);
        splitter_4_postsearch = new QSplitter(splitter_5_postsearch);
        splitter_4_postsearch->setObjectName(QString::fromUtf8("splitter_4_postsearch"));
        splitter_4_postsearch->setOrientation(Qt::Horizontal);
        splitter_3_postsearch = new QSplitter(splitter_4_postsearch);
        splitter_3_postsearch->setObjectName(QString::fromUtf8("splitter_3_postsearch"));
        splitter_3_postsearch->setOrientation(Qt::Vertical);
        splitter_2_postsearch = new QSplitter(splitter_3_postsearch);
        splitter_2_postsearch->setObjectName(QString::fromUtf8("splitter_2_postsearch"));
        splitter_2_postsearch->setOrientation(Qt::Horizontal);
        cbNumber = new QCheckBox(splitter_2_postsearch);
        cbNumber->setObjectName(QString::fromUtf8("cbNumber"));
        splitter_2_postsearch->addWidget(cbNumber);
        leNumber = new QLineEdit(splitter_2_postsearch);
        leNumber->setObjectName(QString::fromUtf8("leNumber"));
        leNumber->setEnabled(true);
        splitter_2_postsearch->addWidget(leNumber);
        splitter_3_postsearch->addWidget(splitter_2_postsearch);
        splitter_postsearch = new QSplitter(splitter_3_postsearch);
        splitter_postsearch->setObjectName(QString::fromUtf8("splitter_postsearch"));
        splitter_postsearch->setOrientation(Qt::Horizontal);
        cbTel = new QCheckBox(splitter_postsearch);
        cbTel->setObjectName(QString::fromUtf8("cbTel"));
        splitter_postsearch->addWidget(cbTel);
        leTel = new QLineEdit(splitter_postsearch);
        leTel->setObjectName(QString::fromUtf8("leTel"));
        splitter_postsearch->addWidget(leTel);
        splitter_3_postsearch->addWidget(splitter_postsearch);
        splitter_4_postsearch->addWidget(splitter_3_postsearch);
        pbSearch = new QPushButton(splitter_4_postsearch);
        pbSearch->setObjectName(QString::fromUtf8("pbSearch"));
        splitter_4_postsearch->addWidget(pbSearch);
        splitter_5_postsearch->addWidget(splitter_4_postsearch);
        tvResuls = new QTableView(splitter_5_postsearch);
        tvResuls->setObjectName(QString::fromUtf8("tvResuls"));
        splitter_5_postsearch->addWidget(tvResuls);

        retranslateUi(postsearch);

        QMetaObject::connectSlotsByName(postsearch);
    } // setupUi

    void retranslateUi(QDialog *postsearch)
    {
        postsearch->setWindowTitle(QApplication::translate("postsearch", "\346\237\245\350\257\242\345\277\253\351\200\222\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        pb1->setText(QApplication::translate("postsearch", "1", 0, QApplication::UnicodeUTF8));
        pbDelete->setText(QApplication::translate("postsearch", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pb0->setText(QApplication::translate("postsearch", "0", 0, QApplication::UnicodeUTF8));
        pb7->setText(QApplication::translate("postsearch", "7", 0, QApplication::UnicodeUTF8));
        pb2->setText(QApplication::translate("postsearch", "2", 0, QApplication::UnicodeUTF8));
        pb3->setText(QApplication::translate("postsearch", "3", 0, QApplication::UnicodeUTF8));
        pbReturn->setText(QApplication::translate("postsearch", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        pb9->setText(QApplication::translate("postsearch", "9", 0, QApplication::UnicodeUTF8));
        pb8->setText(QApplication::translate("postsearch", "8", 0, QApplication::UnicodeUTF8));
        pb4->setText(QApplication::translate("postsearch", "4", 0, QApplication::UnicodeUTF8));
        pb5->setText(QApplication::translate("postsearch", "5", 0, QApplication::UnicodeUTF8));
        pb6->setText(QApplication::translate("postsearch", "6", 0, QApplication::UnicodeUTF8));
        cbNumber->setText(QApplication::translate("postsearch", "\345\277\253\351\200\222\345\215\225\345\217\267", 0, QApplication::UnicodeUTF8));
        cbTel->setText(QApplication::translate("postsearch", "\346\211\213\346\234\272\345\217\267\347\240\201 ", 0, QApplication::UnicodeUTF8));
        pbSearch->setText(QApplication::translate("postsearch", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class postsearch: public Ui_postsearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTSEARCH_H
