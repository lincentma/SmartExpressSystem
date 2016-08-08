/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created: Wed Jun 17 14:08:09 2015
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

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

class Ui_search
{
public:
    QSplitter *splitter_search;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_input_search;
    QLabel *label_phone;
    QLabel *label_statustitle;
    QLineEdit *leTel;
    QLabel *label_status;
    QPushButton *pbSearch;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_keyboard_search;
    QPushButton *pb8;
    QPushButton *pb2;
    QPushButton *pb1;
    QPushButton *pb6;
    QPushButton *pb4;
    QPushButton *pb3;
    QPushButton *pb7;
    QPushButton *pb9;
    QPushButton *pb5;
    QPushButton *pbDelete;
    QPushButton *pb0;
    QPushButton *pbReturn_search;

    void setupUi(QDialog *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName(QString::fromUtf8("search"));
        search->resize(480, 240);
        splitter_search = new QSplitter(search);
        splitter_search->setObjectName(QString::fromUtf8("splitter_search"));
        splitter_search->setGeometry(QRect(10, 10, 461, 61));
        splitter_search->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter_search);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_input_search = new QGridLayout(layoutWidget);
        gridLayout_input_search->setObjectName(QString::fromUtf8("gridLayout_input_search"));
        gridLayout_input_search->setContentsMargins(0, 0, 0, 0);
        label_phone = new QLabel(layoutWidget);
        label_phone->setObjectName(QString::fromUtf8("label_phone"));

        gridLayout_input_search->addWidget(label_phone, 0, 0, 1, 1);

        label_statustitle = new QLabel(layoutWidget);
        label_statustitle->setObjectName(QString::fromUtf8("label_statustitle"));

        gridLayout_input_search->addWidget(label_statustitle, 1, 0, 1, 1);

        leTel = new QLineEdit(layoutWidget);
        leTel->setObjectName(QString::fromUtf8("leTel"));

        gridLayout_input_search->addWidget(leTel, 0, 1, 1, 1);

        label_status = new QLabel(layoutWidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));

        gridLayout_input_search->addWidget(label_status, 1, 1, 1, 1);

        splitter_search->addWidget(layoutWidget);
        pbSearch = new QPushButton(splitter_search);
        pbSearch->setObjectName(QString::fromUtf8("pbSearch"));
        splitter_search->addWidget(pbSearch);
        layoutWidget_2 = new QWidget(search);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 80, 461, 151));
        gridLayout_keyboard_search = new QGridLayout(layoutWidget_2);
        gridLayout_keyboard_search->setObjectName(QString::fromUtf8("gridLayout_keyboard_search"));
        gridLayout_keyboard_search->setContentsMargins(0, 0, 0, 0);
        pb8 = new QPushButton(layoutWidget_2);
        pb8->setObjectName(QString::fromUtf8("pb8"));

        gridLayout_keyboard_search->addWidget(pb8, 2, 1, 1, 1);

        pb2 = new QPushButton(layoutWidget_2);
        pb2->setObjectName(QString::fromUtf8("pb2"));

        gridLayout_keyboard_search->addWidget(pb2, 0, 1, 1, 1);

        pb1 = new QPushButton(layoutWidget_2);
        pb1->setObjectName(QString::fromUtf8("pb1"));

        gridLayout_keyboard_search->addWidget(pb1, 0, 0, 1, 1);

        pb6 = new QPushButton(layoutWidget_2);
        pb6->setObjectName(QString::fromUtf8("pb6"));

        gridLayout_keyboard_search->addWidget(pb6, 1, 2, 1, 1);

        pb4 = new QPushButton(layoutWidget_2);
        pb4->setObjectName(QString::fromUtf8("pb4"));

        gridLayout_keyboard_search->addWidget(pb4, 1, 0, 1, 1);

        pb3 = new QPushButton(layoutWidget_2);
        pb3->setObjectName(QString::fromUtf8("pb3"));

        gridLayout_keyboard_search->addWidget(pb3, 0, 2, 1, 1);

        pb7 = new QPushButton(layoutWidget_2);
        pb7->setObjectName(QString::fromUtf8("pb7"));

        gridLayout_keyboard_search->addWidget(pb7, 2, 0, 1, 1);

        pb9 = new QPushButton(layoutWidget_2);
        pb9->setObjectName(QString::fromUtf8("pb9"));

        gridLayout_keyboard_search->addWidget(pb9, 2, 2, 1, 1);

        pb5 = new QPushButton(layoutWidget_2);
        pb5->setObjectName(QString::fromUtf8("pb5"));

        gridLayout_keyboard_search->addWidget(pb5, 1, 1, 1, 1);

        pbDelete = new QPushButton(layoutWidget_2);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));

        gridLayout_keyboard_search->addWidget(pbDelete, 3, 0, 1, 1);

        pb0 = new QPushButton(layoutWidget_2);
        pb0->setObjectName(QString::fromUtf8("pb0"));

        gridLayout_keyboard_search->addWidget(pb0, 3, 1, 1, 1);

        pbReturn_search = new QPushButton(layoutWidget_2);
        pbReturn_search->setObjectName(QString::fromUtf8("pbReturn_search"));

        gridLayout_keyboard_search->addWidget(pbReturn_search, 3, 2, 1, 1);


        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QDialog *search)
    {
        search->setWindowTitle(QApplication::translate("search", "\346\237\245\350\257\242\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label_phone->setText(QApplication::translate("search", "\346\211\213\346\234\272\345\217\267\347\240\201", 0, QApplication::UnicodeUTF8));
        label_statustitle->setText(QApplication::translate("search", "\346\237\245\350\257\242\347\273\223\346\236\234", 0, QApplication::UnicodeUTF8));
        leTel->setText(QString());
        label_status->setText(QString());
        pbSearch->setText(QApplication::translate("search", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        pb8->setText(QApplication::translate("search", "8", 0, QApplication::UnicodeUTF8));
        pb2->setText(QApplication::translate("search", "2", 0, QApplication::UnicodeUTF8));
        pb1->setText(QApplication::translate("search", "1", 0, QApplication::UnicodeUTF8));
        pb6->setText(QApplication::translate("search", "6", 0, QApplication::UnicodeUTF8));
        pb4->setText(QApplication::translate("search", "4", 0, QApplication::UnicodeUTF8));
        pb3->setText(QApplication::translate("search", "3", 0, QApplication::UnicodeUTF8));
        pb7->setText(QApplication::translate("search", "7", 0, QApplication::UnicodeUTF8));
        pb9->setText(QApplication::translate("search", "9", 0, QApplication::UnicodeUTF8));
        pb5->setText(QApplication::translate("search", "5", 0, QApplication::UnicodeUTF8));
        pbDelete->setText(QApplication::translate("search", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pb0->setText(QApplication::translate("search", "0", 0, QApplication::UnicodeUTF8));
        pbReturn_search->setText(QApplication::translate("search", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
