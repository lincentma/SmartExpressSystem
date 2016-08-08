#ifndef POSTSEARCH_H
#define POSTSEARCH_H

#include <QDialog>
#include <QSqlTableModel>
#include <QSqlQuery>

namespace Ui {
class postsearch;
}

class postsearch : public QDialog
{
    Q_OBJECT

public:
    explicit postsearch(QWidget *parent = 0);
    ~postsearch();

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

    void on_pbSearch_clicked();

    void on_cbNumber_clicked();

    void on_cbTel_clicked();

private:
    Ui::postsearch *ui;
    QSqlTableModel *postsearch_mdel;
};

#endif // POSTSEARCH_H
