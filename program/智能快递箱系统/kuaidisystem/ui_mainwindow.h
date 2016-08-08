/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Jun 17 14:08:09 2015
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
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QGraphicsView *graphicsView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pbPost;
    QFrame *line_3;
    QPushButton *pbTake;
    QFrame *line_2;
    QPushButton *pbSearch;
    QFrame *line;
    QPushButton *pbHelp;
    QSplitter *splitter;
    QLabel *label_time;
    QLCDNumber *lcdNumber_time;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 240);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 461, 41));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(114, 41, 351, 141));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 87, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pbPost = new QPushButton(layoutWidget);
        pbPost->setObjectName(QString::fromUtf8("pbPost"));

        verticalLayout->addWidget(pbPost);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        pbTake = new QPushButton(layoutWidget);
        pbTake->setObjectName(QString::fromUtf8("pbTake"));

        verticalLayout->addWidget(pbTake);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        pbSearch = new QPushButton(layoutWidget);
        pbSearch->setObjectName(QString::fromUtf8("pbSearch"));

        verticalLayout->addWidget(pbSearch);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        pbHelp = new QPushButton(layoutWidget);
        pbHelp->setObjectName(QString::fromUtf8("pbHelp"));

        verticalLayout->addWidget(pbHelp);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(114, 190, 351, 31));
        splitter->setOrientation(Qt::Horizontal);
        label_time = new QLabel(splitter);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        splitter->addWidget(label_time);
        lcdNumber_time = new QLCDNumber(splitter);
        lcdNumber_time->setObjectName(QString::fromUtf8("lcdNumber_time"));
        splitter->addWidget(lcdNumber_time);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\231\272\350\203\275\345\277\253\351\200\222\347\256\261\347\263\273\347\273\237 ", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\346\231\272\350\203\275\345\277\253\351\200\222\347\256\261\347\263\273\347\273\237   \342\200\224\342\200\224\350\245\277\345\215\227\344\272\244\351\200\232\345\244\247\345\255\246\351\251\254\345\207\21420112399\346\257\225\344\270\232\350\256\276\350\256\241  ", 0, QApplication::UnicodeUTF8));
        pbPost->setText(QApplication::translate("MainWindow", "\346\212\225\351\200\222", 0, QApplication::UnicodeUTF8));
        pbTake->setText(QApplication::translate("MainWindow", "\351\242\206\345\217\226", 0, QApplication::UnicodeUTF8));
        pbSearch->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        pbHelp->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        label_time->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
