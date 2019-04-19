#include "readerwindow.h"
#include "ui_readerwindow.h"
#include "mainwindow.h"
#include "eventmanagement.h"
#include "management.h"
#include "dialog.h"
#include <QPropertyAnimation>
#include <QMessageBox>
#include <QTabWidget>
#include <QTreeView>
#include <QTableView>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QDataWidgetMapper>
#include "dialog.h"
#include "mymessagebox.h"
#include <QDateTime>
#include <QApplication>
#include <QtNetwork>
#include <QTextCodec>
#include <QtWidgets>
#include <QRegExp>

readerWindow::readerWindow(const QString &usID, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::readerWindow),
    userID(usID),
    moveable(false),
    mapper(new QDataWidgetMapper)
{
    ui->setupUi(this);
    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(500);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();
    setWindowIcon(QIcon(QPixmap(":/icons/Books Shelf.png")));
    //this->setWindowOpacity(0.95);//透明度
    this->setWindowFlags(Qt::FramelessWindowHint);//去边框
    cityManager_.getSupportProvince(std::bind(&readerWindow::onProvinces,
                                              this, std::placeholders::_1));

    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString str = time.toString("yyyy-MM-dd hh:mm:ss ddd"); //设置显示格式
    ui->time->setText(str.mid(11,5));

    this->setMouseTracking(true);
    ui->home_blue->show();
    ui->search_blue->hide();
    ui->borrow_blue->hide();
    ui->return_blue->hide();
    ui->love_blue->hide();
    ui->more_blue->hide();
    ui->setting_blue->hide();

    ui->preserve_view->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->preserve_view->setShowGrid(false);
    ui->preserve_view->setFrameShape(QFrame::NoFrame);
    ui->preserve_view->verticalHeader()->setVisible(false);
    ui->preserve_view->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->history_view->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->history_view->setShowGrid(false);
    ui->history_view->setFrameShape(QFrame::NoFrame);
    ui->history_view->verticalHeader()->setVisible(false);
    ui->history_view->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->borrow_view->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->borrow_view->setShowGrid(false);
    ui->borrow_view->setFrameShape(QFrame::NoFrame);
    ui->borrow_view->verticalHeader()->setVisible(false);
    ui->borrow_view->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);

    mapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);

    setTreeContent();
    getInformation();

    ui->look->setStyleSheet(QString("border-image: url(:/face/%1")
                            .arg(look) + ".png)");
    ui->look_2->setStyleSheet(QString("border-image: url(:/face/%1")
                            .arg(look) + ".png)");

    ui->provinces->setCurrentText(province);
    ui->citys->setCurrentText(city);
    //设置个人信息
    ui->name_label->setText(name);
    ui->city_label->setText(city);
    ui->name->setText(name);

    ui->tabWidget->setCurrentIndex(0);
}

readerWindow::~readerWindow()
{
    delete ui;
    delete mapper;
}

void readerWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        //获取鼠标当前窗口坐标
        dragPos = event->globalPos() - frameGeometry().topLeft();

        //判断鼠标是否位于标题栏内部
        QRect rect = ui->reader_select->frameRect();
        if (rect.contains(event->pos()))
        {
            moveable = true;
        }
        event->accept();
    }
}

void readerWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() == Qt::LeftButton && moveable)
    {
        move(event->globalPos() - dragPos);
        event->accept();
    }
}

void readerWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);

    moveable = false;
}

void readerWindow::on_home_blue_bt_clicked()
{
    ui->home_blue->show();
    ui->search_blue->hide();
    ui->borrow_blue->hide();
    ui->return_blue->hide();
    ui->love_blue->hide();
    ui->more_blue->hide();
    ui->setting_blue->hide();

    ui->tabWidget->setCurrentIndex(0);
}

void readerWindow::on_search_blue_bt_clicked()
{
    ui->home_blue->hide();
    ui->search_blue->show();
    ui->borrow_blue->hide();
    ui->return_blue->hide();
    ui->love_blue->hide();
    ui->more_blue->hide();
    ui->setting_blue->hide();

    ui->tabWidget->setCurrentIndex(1);

}

void readerWindow::on_borrow_blue_bt_clicked()
{
    ui->home_blue->hide();
    ui->search_blue->hide();
    ui->borrow_blue->show();
    ui->return_blue->hide();
    ui->love_blue->hide();
    ui->more_blue->hide();
    ui->setting_blue->hide();

    ui->tabWidget->setCurrentIndex(1);
//    if (!ui->borrow_view->model())
//    {
//        ui->pushButton_11->setEnabled(false);
//        ui->pushButton_12->setEnabled(false);
//    }
}

void readerWindow::on_return_blue_bt_clicked()
{
    ui->home_blue->hide();
    ui->search_blue->hide();
    ui->borrow_blue->hide();
    ui->return_blue->show();
    ui->love_blue->hide();
    ui->more_blue->hide();
    ui->setting_blue->hide();

    ui->tabWidget->setCurrentIndex(3);

    refreshBorrowTable();
}

void readerWindow::on_love_blue_bt_clicked()
{
    ui->home_blue->hide();
    ui->search_blue->hide();
    ui->borrow_blue->hide();
    ui->return_blue->hide();
    ui->love_blue->show();
    ui->more_blue->hide();
    ui->setting_blue->hide();

    ui->tabWidget->setCurrentIndex(4);

    //建立预约预览表
    //获取借阅记录
    QSqlTableModel *model = new QSqlTableModel;

    model->setTable("preserve_view");
    model->setFilter(QString("r_id = '%1'").arg(userID));
    model->select();
    ui->preserve_view->setModel(model);
    ui->preserve_view->hideColumn(5);
    //ui->preserve_view->resizeColumnsToContents();

    model = new QSqlTableModel;
    model->setTable("history");
    model->setFilter(QString("ID = '%1'").arg(userID));
    model->select();
    ui->history_view->setModel(model);
}

void readerWindow::on_reader_return_bt_clicked()
{
    MainWindow* w = new MainWindow(userID,0);
    w->move(this->pos());
    w->show();
    close();
}

void readerWindow::on_pushButton_8_clicked()
{
    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("About",
                         QString("<h2>User Agreement</h2>"
                                 "<p>Actually, no user agreement "
                                 "<p>Do what you like!<p>"),
                         "OK", "HaHa");

    b->exec();
}

void readerWindow::on_reader_return_bt_2_clicked()
{
    this->close();
}

void readerWindow::setTreeContent()
{
    QStandardItemModel *model = new QStandardItemModel(ui->journal_view);
    QStandardItem *childItem;
    QStandardItem *item;
    QList<QStandardItem *> *secItems = new QList<QStandardItem *>;

    item = new QStandardItem(QStringLiteral("Fashionle"));
    *secItems << new QStandardItem(QStringLiteral("Fashion"))
             << new QStandardItem(QStringLiteral("Film&Music"))
             << new QStandardItem(QStringLiteral("Tuor"));
    item->appendRows(*secItems);
    model->appendRow(item);

    secItems = new QList<QStandardItem *>;
    item = new QStandardItem(QStringLiteral("Healthy"));
    *secItems << new QStandardItem(QStringLiteral("Emotion"))
             << new QStandardItem(QStringLiteral("HealthyCase"))
             << new QStandardItem(QStringLiteral("Diet"));
    item->appendRows(*secItems);
    model->appendRow(item);

    secItems = new QList<QStandardItem *>;
    item = new QStandardItem(QStringLiteral("News"));
    *secItems << new QStandardItem(QStringLiteral("CurrentTimes"))
             << new QStandardItem(QStringLiteral("Military"))
             << new QStandardItem(QStringLiteral("Laws"));
    item->appendRows(*secItems);
    model->appendRow(item);

    secItems = new QList<QStandardItem *>;
    item = new QStandardItem(QStringLiteral("Literatures"));
    *secItems << new QStandardItem(QStringLiteral("Abstract"))
             << new QStandardItem(QStringLiteral("Literature"))
             << new QStandardItem(QStringLiteral("Comment"));
    item->appendRows(*secItems);
    model->appendRow(item);

    secItems = new QList<QStandardItem *>;
    item = new QStandardItem(QStringLiteral("Acadenics"));
    *secItems << new QStandardItem(QStringLiteral("SchoolPaper"))
             << new QStandardItem(QStringLiteral("Ecnomic"))
             << new QStandardItem(QStringLiteral("NatrueScience"))
             << new QStandardItem(QStringLiteral("SocialScience"));
    item->appendRows(*secItems);
    model->appendRow(item);

    QSqlQuery query;

    query.exec("select j_name, j_label, j_label_2 "
               "from Journal");

    if (!query.isActive())
    {
        QMessageBox::warning(this, "Faild",
                             query.lastError().text());

        return ;
    }

    //加入期刊数据
    while (query.next())
    {
        childItem = new QStandardItem(QString::fromLocal8Bit("%1")
                                      .arg(query.value(0).toString()));
        model->item(query.value(1).toInt())
                ->child(query.value(2).toInt())
                ->appendRow(childItem);
    }


    ui->journal_view->setHeaderHidden(true);
    ui->journal_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->journal_view->setModel(model);
}

void readerWindow::getInformation()
{
    QSqlQuery query;

    query.exec(QString("select r_name, r_gender,r_province,r_city,r_birth, label "
                       "from Reader "
                       "where r_id = '%1' ").arg(userID));

    if (!query.next())
    {
        QMessageBox::warning(this, "Error",
                             "Unknown errors!");

        qApp->quit();
    }

    name = query.value(0).toString();
    gender = query.value(1).toString();
    birthday = query.value(4).toString();
    province = query.value(2).toString();
    city = query.value(3).toString();
    look = query.value(5).toInt();
}

void readerWindow::refreshBorrowTable()
{
    //获取借阅记录
    QSqlTableModel *model = new QSqlTableModel;

    model->setTable("borrow_view");
    model->setFilter(QString("r_id = '%1'").arg(userID));
    model->select();
    ui->borrow_view->setModel(model);
    ui->borrow_view->hideColumn(0);
    ui->borrow_view->hideColumn(3);
    ui->borrow_view->hideColumn(4);
    ui->borrow_view->hideColumn(5);
    ui->borrow_view->hideColumn(6);
    ui->borrow_view->hideColumn(7);
    ui->borrow_view->hideColumn(8);
    ui->borrow_view->hideColumn(9);
    ui->borrow_view->hideColumn(10);
    ui->borrow_view->hideColumn(11);
    //ui->borrow_view->resizeColumnsToContents();

    if (model->rowCount() == 0)
        ui->pushButton_14->setEnabled(false);
    else
        ui->pushButton_14->setEnabled(true);
}

//选择期刊
void readerWindow::on_journal_view_doubleClicked(const QModelIndex &index)
{
    QString ISSN;
    QSqlTableModel *tableModel = new QSqlTableModel;

    //查询这类期刊
    QSqlQuery query;

    query.exec(QString("select * "
                       "from Journal "
                       "where j_name = '%1'").arg(index.data().toString()));

    if (query.next())
    {
        ui->book_name->setText(index.data().toString());
        ui->label_38->setText(query.value(1).toString());
        ui->label_42->setText(query.value(2).toString());
        ui->label_43->setText(query.value(4).toString());
        ui->label_44->setText(query.value(3).toString());
        ui->label_45->setText(query.value(7).toString());
        ui->label_46->setText(query.value(6).toString());
//        ui->label_47->setText(query.value(9).toString());
        ui->textEdit_2->setPlainText(query.value(9).toString());
        ISSN = query.value(6).toString();

        int good = query.value(15).toInt();
        int bad = query.value(16).toInt();
//        int sum = good + bad;

//        if (sum == 0)
//        {
//            ui->label_15->setText(QString::number(0) + "%");
//            ui->label_41->setText(QString::number(0) + "%");
//        }
//        else
//        {
//            ui->label_15->setText(QString::number(good * 100 / sum) + "%");
//            ui->label_41->setText(QString::number(bad * 100 / sum) + "%");
//        }
        ui->label_15->setText(QString::number(good));
        ui->label_41->setText(QString::number(bad));
    }
    else
        return ;

    //选中数据
    tableModel->setTable("Book_view");
    tableModel->setFilter(QString("ISSN = '%1'").arg(ISSN));
    tableModel->select();


    //开始设置映射    
    mapper->setModel(tableModel);
    mapper->addMapping(ui->lineEdit, 0);
    mapper->addMapping(ui->lineEdit_2, 1);
    mapper->addMapping(ui->lineEdit_6, 2);
    mapper->toFirst();

    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
}

void readerWindow::on_pushButton_10_clicked()
{
    mapper->toNext();
}

void readerWindow::on_pushButton_13_clicked()
{
    mapper->toPrevious();
}

void readerWindow::on_setting_blue_bt_clicked()
{
    ui->home_blue->hide();
    ui->search_blue->hide();
    ui->borrow_blue->hide();
    ui->return_blue->hide();
    ui->love_blue->hide();
    ui->more_blue->hide();
    ui->setting_blue->show();

    ui->tabWidget->setCurrentIndex(5);

    //初始化设置
    ui->label_32->hide();
    ui->label_28->hide();
    ui->label_35->hide();
    //设置性别
    if (gender == "男")
        ui->label_32->show();
    else if (gender == "女")
        ui->label_28->show();
    else
        ui->label_35->show();

    //设置出生年月
    QString year = birthday.left(4);
    QString month;
    month += birthday[5];
    month += birthday[6];
    QString day = birthday.right(2);

    ui->comboBox_5->setCurrentIndex(2015 - year.toInt());
    ui->comboBox_11->setCurrentIndex(month.toInt() - 1);
    ui->comboBox_12->setCurrentIndex(day.toInt() - 1);

    ui->provinces->setCurrentText(province);
    ui->citys->setCurrentText(city);

    //设置个人喜好
    ui->checkBox_4->setChecked(true);
    ui->checkBox->setChecked(true);
    ui->checkBox_8->setChecked(true);
}

void readerWindow::on_more_blue_bt_clicked()
{
    ui->home_blue->hide();
    ui->search_blue->hide();
    ui->borrow_blue->hide();
    ui->return_blue->hide();
    ui->love_blue->hide();
    ui->more_blue->show();
    ui->setting_blue->hide();

    ui->tabWidget->setCurrentIndex(6);
}

void readerWindow::on_borrow_view_doubleClicked(const QModelIndex &index)
{
    QAbstractItemModel *model = ui->borrow_view->model();

    ui->label_59->setText(model->index(index.row(), 1).data().toString());
    ui->label_77->setText(model->index(index.row(), 3).data().toString());
    ui->label_78->setText(model->index(index.row(), 4).data().toString());
    ui->label_79->setText(model->index(index.row(), 5).data().toString());
    ui->label_70->setText(model->index(index.row(), 7).data().toString());
    ui->label_71->setText(model->index(index.row(), 8).data().toString());
    ui->label_73->setText(model->index(index.row(), 9).data().toString());
    ui->label_75->setText(model->index(index.row(), 6).data().toString());
    ui->label_76->setText(model->index(index.row(), 10).data().toString());
}

void readerWindow::on_pushButton_11_clicked()
{
    QStringList book;

    book << ui->label_46->text()
         << ui->lineEdit->text()
         << "0"
         << ui->lineEdit_6->text();

    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("Successed",
                         QString("<p>Check your borrow iform:"
                                 "<p>%1"
                                 "<p>%2"
                                 "<p>%3").arg(ui->book_name->text())
                         .arg(book.at(1)).arg(book.at(3)),
                         "Yes", "No",
                         false,
                         QString(":/resources/information.png"));
    if (b->exec() == QDialog::Rejected)
        return ;


    EventMessage ret = EventManagement::sendMessage(EventMessage(userID,
                                              EventManagement::J_BORROW,
                                              book));
    if (ret.getEvent() == EventManagement::J_ERROR)
    {
//        QMessageBox::warning(this, "Failed",
//                             ret.getMessageBody().toString());
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Failed",
                             ret.getMessageBody().toString(),
                             "OK", "HaHa",
                             true,
                             QString(":/resources/warning.png"));

        b->exec();
        return ;
    }

//    QMessageBox::information(this, "Successed",
//                             ret.getMessageBody().toString());
    b = new MyMessageBox(this);
    b->setBoxInformation("Successed",
                         ret.getMessageBody().toString(),
                         "OK", "HaHa",
                         true,
                         QString(":/resources/information.png"));

    b->exec();
}

void readerWindow::on_pushButton_12_clicked()
{
    QStringList book;

    book << ui->label_46->text()
         << ui->lineEdit->text()
         << "0"
         << ui->lineEdit_6->text();

    EventMessage ret = EventManagement::sendMessage(EventMessage(userID,
                                              EventManagement::J_PRESERVATION,
                                              book));

    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("Successed",
                         QString("<p>Check your borrow iform:"
                                 "<p>%1"
                                 "<p>%2"
                                 "<p>%3").arg(ui->book_name->text())
                         .arg(book.at(1)).arg(book.at(3)),
                         "Yes", "No",
                         false,
                         QString(":/resources/information.png"));
    if (b->exec() == QDialog::Rejected)
        return ;

    if (ret.getEvent() == EventManagement::J_ERROR)
    {
        //        QMessageBox::warning(this, "Failed",
        //                             ret.getMessageBody().toString());
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Failed",
                             ret.getMessageBody().toString(),
                             "OK", "HaHa",
                             true,
                             QString(":/resources/warning.png"));

        b->exec();
        return ;
    }

//    QMessageBox::information(this, "Successed",
//                             ret.getMessageBody().toString());
    b = new MyMessageBox(this);
    b->setBoxInformation("Successed",
                         ret.getMessageBody().toString(),
                         "OK", "HaHa",
                         true,
                         QString(":/resources/information.png"));

    b->exec();
}

void readerWindow::on_pushButton_14_clicked()
{
    int bookID = ui->label_76->text().toInt();

    EventMessage ret = EventManagement::sendMessage(EventMessage(userID,
                                              EventManagement::J_RETURN,
                                              bookID));

    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("Successed",
                         "Sure to return this BOOK?",
                         "Yes", "No",
                         false,
                         QString(":/resources/information.png"));
    if (b->exec() == QDialog::Rejected)
        return ;

    if (ret.getEvent() == EventManagement::J_ERROR)
    {
//        QMessageBox::warning(this, "Failed",
//                             ret.getMessageBody().toString());
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Failed",
                             ret.getMessageBody().toString(),
                             "OK", "HaHa",
                             true,
                             QString(":/resources/warning.png"));

        b->exec();
        return ;
    }
//    QMessageBox::information(this, "Successed",
//                             ret.getMessageBody().toString());
    b = new MyMessageBox(this);
    b->setBoxInformation("Successed",
                         ret.getMessageBody().toString(),
                         "OK", "HaHa",
                         true,
                         QString(":/resources/information.png"));
    b->exec();

    refreshBorrowTable();
}

void readerWindow::on_pushButton_4_clicked()
{
    QString ISSN;
    QSqlTableModel *tableModel = new QSqlTableModel;
    //获取书名
    QString journalName = ui->lineEdit_3->text();
    //获取出版社名
    //QString pub = ui->lineEdit_5->text();
    //获取年卷期
    int yaer = ui->comboBox_10->currentText().toInt();
    int issue = ui->comboBox_9->currentIndex();

    //书名不能为空
    if (journalName.isEmpty())
    {/*
        QMessageBox::warning(this, "Sorry",
                             "We need to know the name of your journal");*/
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Sorry",
                             "We need to know the name of your journal",
                             "OK", "HaHa",
                             true,
                             QString(":/resources/warning.png"));
        b->exec();

        return ;
    }

    //查询这类期刊
    QSqlQuery query;

//    if (pub.isEmpty())
    query.exec(QString("select * "
                   "from Journal "
                   "where j_name = '%1'").arg(journalName));
//    else
//        query.exec(QString("select * "
//                       "from Journal "
    //                       "where j_name = '%1' and "
    //                           "j_publisher = '%2' ").arg(journalName).arg(pub));


    if (query.next())
    {
        ui->book_name->setText(journalName);
        ui->label_38->setText(query.value(1).toString());
        ui->label_42->setText(query.value(2).toString());
        ui->label_43->setText(query.value(4).toString());
        ui->label_44->setText(query.value(3).toString());
        ui->label_45->setText(query.value(7).toString());
        ui->label_46->setText(query.value(6).toString());
        //ui->label_47->setText(query.value(9).toString());
        ui->textEdit_2->setPlainText(query.value(9).toString());
        ISSN = query.value(6).toString();

        int good = query.value(15).toInt();
        int bad = query.value(16).toInt();
//        int sum = good + bad;

//        if (sum == 0)
//        {
//            ui->label_15->setText(QString::number(0) + "%");
//            ui->label_41->setText(QString::number(0) + "%");
//        }
//        else
//        {
//            ui->label_15->setText(QString::number(good * 100 / sum) + "%");
//            ui->label_41->setText(QString::number(bad * 100 / sum) + "%");
//        }
        ui->label_15->setText(QString::number(good));
        ui->label_41->setText(QString::number(bad));
    }
    else
    {/*
        QMessageBox::warning(this, "Sorry",
                             "May be you should go otherwhere to find it!");*/
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Sorry",
                             "May be you should go otherwhere to find it!",
                             "OK", "HaHa",
                             true,
                             QString(":/resources/warning.png"));
        b->exec();

        return ;
    }

    //选中数据
    tableModel->setTable("Book_view");
    if (issue)
        tableModel->setFilter(QString("ISSN = '%1' and regist_year = %2 "
                                      "and regist_qi = %3").arg(ISSN).arg(yaer)
                              .arg(issue));
    else
        tableModel->setFilter(QString("ISSN = '%1' and regist_year = %2 ").arg(ISSN).arg(yaer));

    tableModel->select();
    if (!tableModel->rowCount())
    {/*
            QMessageBox::warning(this, "Sorry",
                                 "We didn't find what you want!");*/
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Sorry",
                             "We didn't find what you want!",
                             "OK", "HaHa",
                             true,
                             QString(":/resources/warning.png"));
        b->exec();

        return ;
    }

    //开始设置映射
    mapper->setModel(tableModel);
    mapper->addMapping(ui->lineEdit, 0);
    mapper->addMapping(ui->lineEdit_2, 1);
    mapper->addMapping(ui->lineEdit_6, 2);
    mapper->toFirst();

    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
}

void readerWindow::on_pushButton_9_clicked()
{
    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("About",
                         QString("<h2>Copyright @ 2016 HQC.inc</h2>"
                                 "<h3>For more information</h3> "
                                 "<p>Please contact our production manager "
                                 "<p>Mr.ZH & Ms.ZYY<p>"),
                         "OK", "HaHa");

    b->exec();
}

void readerWindow::on_pushButton_3_clicked()
{
    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("Update",
                         QString("<h3>Current Version: v1.1</h3> "
                                 "<p>You are already at the latest version "),
                         "OK",
                         "HaHa");

    b->exec();
}

void readerWindow::on_pushButton_15_clicked()
{
    QSqlQuery query;
    QString ISSN = ui->label_46->text();

    query.exec(QString("update Journal "
                       "set good = good + 1 "
                       "where ISSN = '%1' ").arg(ISSN));

    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    query.exec(QString("select good, bad "
                       "from Journal "
                       "where ISSN = '%1' ").arg(ISSN));

    query.next();

    int good = query.value(0).toInt();
    int bad = query.value(1).toInt();
//    int sum = good + bad;

//    if (!sum)
//    {
//        ui->label_15->setText(QString::number(0) + "%");
//        ui->label_41->setText(QString::number(0) + "%");
//    }
//    else
//    {
//        ui->label_15->setText(QString::number(good * 100 / sum) + "%");
//        ui->label_41->setText(QString::number(bad * 100 / sum) + "%");
//    }
    ui->label_15->setText(QString::number(good));
    ui->label_41->setText(QString::number(bad));
}

void readerWindow::on_pushButton_16_clicked()
{
    QSqlQuery query;
    QString ISSN = ui->label_46->text();

    query.exec(QString("update Journal "
                       "set bad = bad + 1 "
                       "where ISSN = '%1' ").arg(ISSN));

    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    query.exec(QString("select good, bad "
                       "from Journal "
                       "where ISSN = '%1' ").arg(ISSN));

    query.next();

    int good = query.value(0).toInt();
    int bad = query.value(1).toInt();
//    int sum = good + bad;

//    if (!sum)
//    {
//        ui->label_15->setText(QString::number(0) + "%");
//        ui->label_41->setText(QString::number(0) + "%");
//    }
//    else
//    {
//        ui->label_15->setText(QString::number(good * 100 / sum) + "%");
//        ui->label_41->setText(QString::number(bad * 100 / sum) + "%");
//    }
    ui->label_15->setText(QString::number(good));
    ui->label_41->setText(QString::number(bad));
}



void readerWindow::onProvinces(const QStringList &strList)
{
    QStringList::const_iterator citer = strList.constBegin();
    for ( ; citer != strList.constEnd(); ++citer) {
        ui->provinces->addItem(*citer);
    }
    ui->provinces->setCurrentIndex(0);
    cityManager_.getSupportCity(ui->provinces->currentText(), std::bind(&readerWindow::onCitys, this, std::placeholders::_1));
}

void readerWindow::onCitys(const QStringList &strList)
{
    ui->citys->clear();
    QStringList::const_iterator citer = strList.constBegin();
    for ( ; citer != strList.constEnd(); ++citer) {
        QString str = citer->left(citer->indexOf(QChar(' ')));
        ui->citys->addItem(str);
    }
}


void readerWindow::onWeather(const QStringList &strList)
{
    if (strList.count() < 23) {
        return;
    }

    QString strImage(":/weather/");
//    QString str = strList[8];
    QString str1, str2, str3;

    str1 = strList[8];
    str1.remove(QRegExp("[.][g][i][f]"));
    str1 += ".png";
    str2 = strList[9];
    str2.remove(QRegExp("[.][g][i][f]"));
    str2 += ".png";
    str3 = strList[6];

    ui->labelImage1->setPixmap(QPixmap(strImage + str1));
    ui->labelImage2->setPixmap(QPixmap(strImage + str2));
    ui->labelTemperature->setText(strList[5]);
    ui->weather->setText(str3.mid(6));
    ui->labelWind->setText(strList[7]);

}



//===============================
void readerWindow::on_provinces_currentIndexChanged(const QString &provinceName)
{
    //showClear();
    cityManager_.getSupportCity(provinceName, std::bind(&readerWindow::onCitys, this, std::placeholders::_1));
}

void readerWindow::on_citys_currentIndexChanged(const QString &)
{
    //showClear();
}

void readerWindow::showClear()
{
    ui->labelImage1->clear();
    ui->labelImage2->clear();
    ui->labelTemperature->clear();
    ui->weather->clear();
    ui->labelWind->clear();

}

void readerWindow::on_findButton_clicked()
{
    cityManager_.getWeatherbyCityName(ui->citys->currentText(), std::bind(&readerWindow::onWeather, this, std::placeholders::_1));
}
//==============================================
void readerWindow::on_pushButton_5_clicked()
{
    ui->label_32->setHidden(false);
    ui->label_28->setHidden(true);
    ui->label_35->setHidden(true);
}

void readerWindow::on_pushButton_6_clicked()
{
    ui->label_32->setHidden(true);
    ui->label_28->setHidden(false);
    ui->label_35->setHidden(true);
}

void readerWindow::on_pushButton_7_clicked()
{
    ui->label_32->setHidden(true);
    ui->label_28->setHidden(true);
    ui->label_35->setHidden(false);
}

void readerWindow::on_pushButton_clicked()
{
    QString gender;
    QString birthday;
    QString pro;
    QString cit;
    QSqlQuery query;

    if (!ui->label_32->isHidden())
        gender = "男";
    else if (!ui->label_28->isHidden())
        gender = "女";
    else
        gender = "秘";

    query.exec(QString("update Reader "
                       "set r_gender = '%1' "
                       "where r_id = '%2' ").arg(gender).arg(userID));
    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    birthday += ui->comboBox_5->currentText();
    birthday += "-" + ui->comboBox_11->currentText();
    birthday += "-" + ui->comboBox_12->currentText();

    query.exec(QString("update Reader "
                       "set r_birth = '%1' "
                       "where r_id = '%2' ").arg(birthday).arg(userID));
    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    pro = ui->provinces->currentText();
    cit = ui->citys->currentText();
    query.exec(QString("update Reader "
                       "set r_province = '%1' "
                       "where r_id = '%2' ").arg(pro).arg(userID));
    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    query.exec(QString("update Reader "
                       "set r_city = '%1' "
                       "where r_id = '%2' ").arg(cit).arg(userID));
    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    getInformation();
}

void readerWindow::on_look_bt_clicked()
{
    QString label;
    Dialog *d = new Dialog(this);



    d->exec();
    label = d->getlabel();

    ui->look->setStyleSheet(QString("border-image: url(:/face/%1)")
                            .arg(label));
    ui->look_2->setStyleSheet(QString("border-image: url(:/face/%1)")
                              .arg(label));
    label.remove(QRegExp("[.][p][n][g]"));

    look = label.toInt();
    QSqlQuery query;

    query.exec(QString("update Reader "
                       "set label = %1 "
                       "where r_id = '%2'").arg(look)
               .arg(userID));

    getInformation();
}

void readerWindow::on_pushButton_2_clicked()
{
    ui->tabWidget->setCurrentIndex(5);
}
