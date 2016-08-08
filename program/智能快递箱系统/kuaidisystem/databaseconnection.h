#ifndef DATABASECONNECTION
#define DATABASECONNECTION

#include <QSqlDatabase>

class databaseconnection
{
public :
    databaseconnection();
    static QSqlDatabase db;
    static bool Open();
    static void Close();
    static QString  databasename;
    static void setdatabase();
};

#endif // DATABASECONNECTION

