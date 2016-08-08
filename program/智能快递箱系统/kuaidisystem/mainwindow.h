#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

#include "help.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pbPost_clicked();

    void on_pbTake_clicked();

    void on_pbSearch_clicked();

    void on_pbHelp_clicked();

//LCDNumber显示系统时间
public slots:
   void xytimerUpDate();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
