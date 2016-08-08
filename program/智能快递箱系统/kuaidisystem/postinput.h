#ifndef POSTINPUT_H
#define POSTINPUT_H

#include <QDialog>

namespace Ui {
class postinput;
}

class postinput : public QDialog
{
    Q_OBJECT

public:
    explicit postinput(QWidget *parent = 0);
    ~postinput();

private slots:
    void on_pbReturn_clicked();

    void on_pb0_clicked();

    void on_pb1_clicked();

    void on_pb2_clicked();

    void on_pb3_clicked();

    void on_pb4_clicked();

    void on_pb5_clicked();

    void on_pb6_clicked();

    void on_pb7_clicked();

    void on_pb8_clicked();

    void on_pb9_clicked();

    void on_pbDelete_clicked();

    void on_pbOK_clicked();

    void on_cbBig_clicked();

    void on_cbMiddle_clicked();

    void on_cbSmall_clicked();

private:
    Ui::postinput *ui;
};

#endif // POSTINPUT_H
