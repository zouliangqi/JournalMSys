#ifndef CONNECTION_H
#define CONNECTION_H

/**********************
 *
 *   数据库连接函数
 *
 ********************/

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <fstream>
#include <QMessageBox>
#include <string>

using namespace std;


//链接数据库
static bool createConnection(void)
{
    ifstream SQL;
    string str, user, pwd;

    SQL.open("SQL.txt");
    if (!SQL)
    {
        QMessageBox::warning(0, "Failed",
                             "Can't open the file!");
        return false;
    }
    getline(SQL, str);
    getline(SQL, user);
    getline(SQL, pwd);
    QString dsn(str.c_str());
    QString dUser(user.c_str());
    QString dPwd(pwd.c_str());

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    //QString dsn("DRIVER={SQL SERVER};SERVER=HX-PC\\sqlexpress;DATABASE=journal_test;");

    //设置数据库参数
    db.setDatabaseName(dsn);
    db.setUserName(dUser);
    db.setPassword(dPwd);

    if (!db.open())
    {
        QMessageBox::critical(0, "DataBase Error",
                              db.lastError().text());

        return false;
    }

    return true;
}


#endif // CONNECTION_H
