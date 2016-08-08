#ifndef POSTMANAGE_H
#define POSTMANAGE_H

#include <QDialog>

namespace Ui {
class postmanage;
}

class postmanage : public QDialog
{
    Q_OBJECT

public:
    explicit postmanage(QWidget *parent = 0);
    ~postmanage();

private slots:
    void on_pbReturn_postmanage_clicked();

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

private:
    Ui::postmanage *ui;
};

#endif // POSTMANAGE_H
