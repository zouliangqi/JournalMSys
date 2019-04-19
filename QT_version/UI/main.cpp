#include "mainwindow.h"
#include "readerwindow.h"
#include "connection.h"
#include "mymessagebox.h"
#include <QApplication>
#include <QMessageBox>

void regist();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if (!createConnection())
    {
        QMessageBox::warning(0, "Failed",
                             "Can't connect to the database!");

        return 1;
    }

    //regist();
    MainWindow w("", 0);
    w.show();

    return a.exec();
}

////辅助函数。用于登记
//void regist()
//{
//    QSqlQuery query, insert;

//    query.exec("select ISSN, j_pubperiod "
//               "from Journal");

//    //登记
//    while (query.next())
//    {
//        int repeat = 0;
//        QString str = query.value(1).toString();
//        if (str == "m")
//            repeat = 1;
//        else if (str == "h")
//            repeat = 2;
//        else if (str == "t")
//            repeat = 3;
//        //对每一本期刊，登记三年
//        for (int y = 2013; y <= 2016; ++y)
//        {
//            int q = 1;
//            //登记月份
//            for (int m = 1; m <= (y == 2016? 5 : 12); ++m)
//            {
//                if (repeat)
//                {
//                    for (int r = 1; r <= repeat; ++r, ++q)
//                        for (int times = 0; times < 5; ++times)
//                            insert.exec(QString("insert into Book (regist_year, regist_qi, ISSN) "
//                                               "values(%1, %2, '%3')")
//                                       .arg(y).arg(q).arg(query.value(0).toString()));
//                }
//                else
//                {
//                    if (m % 3 == 1)
//                    {
//                        for (int times = 0; times < 5; ++times)
//                            insert.exec(QString("insert into Book (regist_year, regist_qi, ISSN) "
//                                           "values(%1, %2, '%3')")
//                                   .arg(y).arg(q).arg(query.value(0).toString()));
//                        ++q;
//                    }
//                }
//            }
//        }
//    }
//}

