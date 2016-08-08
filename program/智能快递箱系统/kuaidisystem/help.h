#ifndef HELP_H
#define HELP_H

#include <QDialog>


namespace Ui {
class help;
}

class help : public QDialog
{
    Q_OBJECT

public:
    explicit help(QWidget *parent = 0);
    ~help();

private slots:
    void on_pbReturn_help_clicked();

    void on_pbSetting_clicked();

    void on_pb1_clicked();

    void on_pb2_clicked();

    void on_pb3_clicked();

    void on_pb4_clicked();

    void on_pb5_clicked();

    void on_pb6_clicked();

    void on_pb7_clicked();

    void on_pb8_clicked();

    void on_pb9_clicked();

    void on_pb0_clicked();

    void on_pbDelete_clicked();

private:
    Ui::help *ui;
};

#endif // HELP_H
