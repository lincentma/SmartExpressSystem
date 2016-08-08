/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Jun 16 10:52:07 2015
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QProgressBar *progressBar;
    QPushButton *pbOK;
    QLabel *label_status;
    QLabel *label_statustitle;
    QSplitter *splitter;
    QLabel *labe_ip;
    QLineEdit *le_ip;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 256);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 190, 381, 31));
        progressBar->setValue(0);
        pbOK = new QPushButton(centralWidget);
        pbOK->setObjectName(QString::fromUtf8("pbOK"));
        pbOK->setGeometry(QRect(10, 40, 131, 41));
        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(70, 130, 321, 41));
        label_statustitle = new QLabel(centralWidget);
        label_statustitle->setObjectName(QString::fromUtf8("label_statustitle"));
        label_statustitle->setGeometry(QRect(10, 130, 45, 40));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 0, 381, 31));
        splitter->setOrientation(Qt::Horizontal);
        labe_ip = new QLabel(splitter);
        labe_ip->setObjectName(QString::fromUtf8("labe_ip"));
        splitter->addWidget(labe_ip);
        le_ip = new QLineEdit(splitter);
        le_ip->setObjectName(QString::fromUtf8("le_ip"));
        splitter->addWidget(le_ip);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\231\272\350\203\275\345\277\253\351\200\222\347\256\261\346\225\260\346\215\256\346\216\245\346\224\266\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        pbOK->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\347\233\221\345\220\254", 0, QApplication::UnicodeUTF8));
        label_status->setText(QString());
        label_statustitle->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\n"
"\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        labe_ip->setText(QApplication::translate("MainWindow", "\345\277\253\351\200\222\347\256\261IP\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
