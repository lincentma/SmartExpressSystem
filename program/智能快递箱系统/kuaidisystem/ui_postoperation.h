/********************************************************************************
** Form generated from reading UI file 'postoperation.ui'
**
** Created: Wed Jun 17 14:08:09 2015
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTOPERATION_H
#define UI_POSTOPERATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_postoperation
{
public:
    QSplitter *splitter;
    QLabel *label_iptitle;
    QLabel *label_ipaddress;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbPost;
    QPushButton *pbSearch;
    QPushButton *pbsendfile;
    QPushButton *pbReturn;

    void setupUi(QDialog *postoperation)
    {
        if (postoperation->objectName().isEmpty())
            postoperation->setObjectName(QString::fromUtf8("postoperation"));
        postoperation->resize(480, 240);
        splitter = new QSplitter(postoperation);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(30, 10, 431, 21));
        splitter->setOrientation(Qt::Horizontal);
        label_iptitle = new QLabel(splitter);
        label_iptitle->setObjectName(QString::fromUtf8("label_iptitle"));
        splitter->addWidget(label_iptitle);
        label_ipaddress = new QLabel(splitter);
        label_ipaddress->setObjectName(QString::fromUtf8("label_ipaddress"));
        splitter->addWidget(label_ipaddress);
        layoutWidget = new QWidget(postoperation);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 461, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbPost = new QPushButton(layoutWidget);
        pbPost->setObjectName(QString::fromUtf8("pbPost"));
        pbPost->setMinimumSize(QSize(100, 100));

        horizontalLayout->addWidget(pbPost);

        pbSearch = new QPushButton(layoutWidget);
        pbSearch->setObjectName(QString::fromUtf8("pbSearch"));
        pbSearch->setMinimumSize(QSize(100, 100));

        horizontalLayout->addWidget(pbSearch);

        pbsendfile = new QPushButton(layoutWidget);
        pbsendfile->setObjectName(QString::fromUtf8("pbsendfile"));
        pbsendfile->setMinimumSize(QSize(100, 100));

        horizontalLayout->addWidget(pbsendfile);


        verticalLayout->addLayout(horizontalLayout);

        pbReturn = new QPushButton(layoutWidget);
        pbReturn->setObjectName(QString::fromUtf8("pbReturn"));

        verticalLayout->addWidget(pbReturn);


        retranslateUi(postoperation);

        QMetaObject::connectSlotsByName(postoperation);
    } // setupUi

    void retranslateUi(QDialog *postoperation)
    {
        postoperation->setWindowTitle(QApplication::translate("postoperation", "\345\277\253\351\200\222\345\221\230\346\223\215\344\275\234\345\212\237\350\203\275\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label_iptitle->setText(QApplication::translate("postoperation", "\346\234\254\346\231\272\350\203\275\345\277\253\351\200\222\347\256\261IP\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_ipaddress->setText(QString());
        pbPost->setText(QApplication::translate("postoperation", "\346\212\225\351\200\222\345\277\253\351\200\222", 0, QApplication::UnicodeUTF8));
        pbSearch->setText(QApplication::translate("postoperation", "\346\237\245\350\257\242\345\277\253\351\200\222", 0, QApplication::UnicodeUTF8));
        pbsendfile->setText(QApplication::translate("postoperation", "\344\270\212\344\274\240\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        pbReturn->setText(QApplication::translate("postoperation", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class postoperation: public Ui_postoperation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTOPERATION_H
