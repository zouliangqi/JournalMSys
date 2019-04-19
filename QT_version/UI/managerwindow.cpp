#include "managerwindow.h"
#include "ui_managerwindow.h"
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
#include <QSqlRecord>

managerWindow::managerWindow(const QString &usID, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::managerWindow),
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
    this->setMouseTracking(true);

    cityManager_.getSupportProvince(std::bind(&managerWindow::onProvinces,
                                              this, std::placeholders::_1));

    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString str = time.toString("yyyy-MM-dd hh:mm:ss ddd"); //设置显示格式
    ui->time->setText(str.mid(11,5));

    //设置按钮初始化样式
    ui->reader_red->hide();
    ui->search_red->hide();
    ui->borrow_red->hide();
    ui->return_red->hide();
    ui->setting_red->hide();
    ui->love_red->hide();
    ui->home_red->show();

    ui->journal_view->setHeaderHidden(true);
    ui->journal_view->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->reader_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->reader_view->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->reader_view->setShowGrid(false);
    ui->reader_view->setFrameShape(QFrame::NoFrame);
    ui->reader_view->verticalHeader()->setVisible(false);
    ui->reader_view->horizontalHeader()->setVisible(false);

    ui->mail_view->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->mail_view->setShowGrid(false);
    ui->mail_view->setFrameShape(QFrame::NoFrame);
    ui->mail_view->verticalHeader()->setVisible(false);
    ui->reader_view->horizontalHeader()->setVisible(false);

    mapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);

    setTreeContent();
    setReaderTree();
    getInformation();
    initialMailBox();
    //设置个人信息
    ui->look->setStyleSheet(QString("border-image: url(:/face/%1")
                            .arg(look) + ".png)");
    ui->look_2->setStyleSheet(QString("border-image: url(:/face/%1")
                            .arg(look) + ".png)");

    ui->provinces->setCurrentText(province);
    //ui->citys->setCurrentText(city);
    //设置个人信息
    ui->name_label->setText(name);
    ui->city_label->setText(city);
    ui->name->setText(name);

    ui->menu_tab->setCurrentIndex(6);
}

managerWindow::~managerWindow()
{
    delete ui;
    delete mapper;
    delete borrowMail;
    delete returnMail;
    delete readerModel;
}

void managerWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        //获取鼠标当前窗口坐标
        dragPos = event->globalPos() - frameGeometry().topLeft();

        //判断鼠标是否位于标题栏内部
        QRect rect = ui->manager_select->frameRect();
        if (rect.contains(event->pos()))
        {
            moveable = true;
        }
        event->accept();
    }
}

void managerWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() == Qt::LeftButton && moveable)
    {
        move(event->globalPos() - dragPos);
        event->accept();
    }
}

void managerWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);

    moveable = false;
}

void managerWindow::getInformation()
{
    QSqlQuery query;

    query.exec(QString("select m_name, m_gender,m_province,m_city,m_birth, label "
                       "from Manager "
                       "where m_id = '%1' ").arg(userID));

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

void managerWindow::setReaderTree()
{
    readerModel = new QSqlTableModel;

    readerModel->setTable("reader_view");
    readerModel->select();

    //设置目录
    ui->reader_view->setModel(readerModel);

    for (int i = 1; i < 9; ++i)
        ui->reader_view->hideColumn(i);
}

void managerWindow::initialMailBox()
{
    borrowMail = new QSqlTableModel;
    returnMail = new QSqlTableModel;

    borrowMail->setTable("b_request_view");
    //borrowMail->setFilter(QString("u_event != %1").arg(EventManagement::J_ANSWER));
    borrowMail->setFilter(QString("u_event != %1").arg(EventManagement::J_ANSWER));
    borrowMail->select();

    returnMail->setTable("r_request_view");
    borrowMail->setFilter(QString("u_event != %1").arg(EventManagement::J_ANSWER));
    returnMail->select();

    mail = 1;
}

void managerWindow::on_reader_red_bt_clicked()
{
    ui->reader_red->show();
    ui->search_red->hide();
    ui->borrow_red->hide();
    ui->return_red->hide();
    ui->setting_red->hide();
    ui->love_red->hide();
    ui->home_red->hide();

    ui->menu_tab->setCurrentIndex(0);
}

void managerWindow::on_search_red_bt_clicked()
{
    ui->reader_red->hide();
    ui->search_red->show();
    ui->borrow_red->hide();
    ui->return_red->hide();
    ui->setting_red->hide();
    ui->love_red->hide();
    ui->home_red->hide();

    ui->menu_tab->setCurrentIndex(1);

    //ui->lineEdit_7->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
}

void managerWindow::on_borrow_red_bt_clicked()
{
    ui->reader_red->hide();
    ui->search_red->hide();
    ui->borrow_red->show();
    ui->return_red->hide();
    ui->setting_red->hide();
    ui->love_red->hide();
    ui->home_red->hide();

    ui->menu_tab->setCurrentIndex(2);


    borrowMail->setTable("b_request_view");
    //borrowMail->setFilter(QString("u_event != %1").arg(EventManagement::J_ANSWER));
    borrowMail->setFilter(QString("u_event != %1").arg(EventManagement::J_ANSWER));
    borrowMail->select();

    ui->mail_view->setModel(borrowMail);
    mail = 1;
}

void managerWindow::on_return_red_bt_clicked()
{
    ui->reader_red->hide();
    ui->search_red->hide();
    ui->borrow_red->hide();
    ui->return_red->show();
    ui->setting_red->hide();
    ui->love_red->hide();
    ui->home_red->hide();

    ui->menu_tab->setCurrentIndex(3);
}

void managerWindow::on_love_red_bt_clicked()
{
    ui->reader_red->hide();
    ui->search_red->hide();
    ui->borrow_red->hide();
    ui->return_red->hide();
    ui->setting_red->hide();
    ui->love_red->show();
    ui->home_red->hide();

    ui->menu_tab->setCurrentIndex(5);
}

void managerWindow::on_manager_return_bt_clicked()
{
    MainWindow* w = new MainWindow(userID, 0);
    w->move(this->pos());
    w->show();
    close();
}

void managerWindow::on_manager_quit_bt_clicked()
{
    close();
}

void managerWindow::on_setting_red_bt_clicked()
{
    ui->reader_red->hide();
    ui->search_red->hide();
    ui->borrow_red->hide();
    ui->return_red->hide();
    ui->setting_red->show();
    ui->love_red->hide();
    ui->home_red->hide();

    ui->menu_tab->setCurrentIndex(4);

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

    //设置个人喜好
    ui->checkBox_4->setChecked(true);
    ui->checkBox->setChecked(true);
    ui->checkBox_8->setChecked(true);
}

void managerWindow::setTreeContent()
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

    ui->journal_view->setModel(model);
}



void managerWindow::on_journal_view_doubleClicked(const QModelIndex &index)
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
        //ui->label_47->setText(query.value(9).toString());
        ui->textEdit_2->setPlainText(query.value(9).toString());
        ui->lineEdit_7->setText(query.value(13).toString());
        ISSN = query.value(6).toString();
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
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    //ui->pushButton_12->setEnabled(true);
}

void managerWindow::on_pushButton_4_clicked()
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
        //            ui->label_47->setText(query.value(9).toString());
        ui->textEdit_2->setPlainText(query.value(9).toString());
        ISSN = query.value(6).toString();
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
}

void managerWindow::on_pushButton_10_clicked()
{
    mapper->toNext();
}

void managerWindow::on_pushButton_13_clicked()
{
    mapper->toPrevious();
}

void managerWindow::on_reader_view_doubleClicked(const QModelIndex &index)
{
   int row = index.row();

   QSqlRecord record = readerModel->record(row);

   ui->label_59->setText(record.value(1).toString());
   ui->label_77->setText(record.value(4).toString());
   ui->label_78->setText(record.value(5).toString());
   ui->label_79->setText(record.value(6).toString());
   //ui->label_70->setText(record.value(3).toString());
   ui->label_71->setText(record.value(2).toString());
   ui->label_73->setText(record.value(3).toString());
   ui->label_75->setText(record.value(7).toString());
   ui->label_76->setText(record.value(8).toString());
}

void managerWindow::on_pushButton_14_clicked()
{
    borrowMail->setTable("b_request_view");
    //borrowMail->setFilter(QString("u_event != %1").arg(EventManagement::J_ANSWER));
    borrowMail->setFilter(QString("u_event != %1").arg(EventManagement::J_ANSWER));
    borrowMail->select();

    ui->mail_view->setModel(borrowMail);
    mail = 1;
}

void managerWindow::on_pushButton_15_clicked()
{
    returnMail->setTable("r_request_view");
    returnMail->setFilter(QString("u_event != %1").arg(EventManagement::J_ANSWER));
    returnMail->select();

    ui->mail_view->setModel(returnMail);
    mail = 2;
}

void managerWindow::on_mail_view_doubleClicked(const QModelIndex &index)
{
    QAbstractItemModel *model = ui->mail_view->model();
    int bookID = model->index(index.row(), 1).data().toInt();
    QSqlQuery query;

    switch(mail)
    {
    case 1:
        query.exec(QString("update b_request_view "
                           "set u_event = %1 "
                           "where b_id = %2 ").arg(static_cast<int>(EventManagement::J_ANSWER))
                   .arg(bookID));
        borrowMail->setTable("b_request_view");
        //borrowMail->setFilter(QString("u_event != %1").arg(EventManagement::J_ANSWER));
        borrowMail->setFilter(QString("u_event != %1").arg(EventManagement::J_ANSWER));
        borrowMail->select();
        break;
    case 2 :
        query.exec(QString("update r_request_view "
                           "set u_event = %1 "
                           "where b_id = %2 ").arg(static_cast<int>(EventManagement::J_ANSWER))
                   .arg(bookID));
        returnMail->setTable("r_request_view");
        returnMail->setFilter(QString("u_event != %1").arg(EventManagement::J_ANSWER));
        returnMail->select();
        break;
    default :
        break;
    }
}

void managerWindow::on_pushButton_11_clicked()
{
    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("Stop Sub",
                         "Really stop subscribing this Journal?",
                         "Yes", "No",
                         false,
                         QString(":/resources/information.png"));
    if (b->exec() == QDialog::Rejected)
        return ;

    QString ISSN = ui->label_46->text();

    QSqlQuery query;

    query.exec(QString("update Journal "
                       "set [continue] = 0 "
                       "where ISSN = '%1' ").arg(ISSN));    

    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

}

void managerWindow::on_pushButton_12_clicked()
{
    bool ok;
    QString ISSN = ui->label_46->text();
    int number = ui->lineEdit_7->text().toInt(&ok);

    if (!ok)
    {/*
        QMessageBox::warning(this, "Error",
                             "Please enter a number");*/
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Sorry",
                             "Please enter a number",
                             "OK", "HaHa",
                             true,
                             QString(":/resources/warning.png"));

        b->exec();
        return ;
    }

    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("Alter",
                         "Really alter subscribing number of this Journal?",
                         "Yes", "No",
                         false,
                         QString(":/resources/information.png"));
    if (b->exec() == QDialog::Rejected)
        return ;

    QSqlQuery query;

    query.exec(QString("update Journal "
                       "set number = %1 "
                       "where ISSN = '%2' ").arg(number).arg(ISSN));

    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());
}

void managerWindow::on_lineEdit_7_textChanged(const QString &arg1)
{
    if (!arg1.isEmpty())
        ui->pushButton_12->setEnabled(true);
    else
        ui->pushButton_12->setEnabled(false);
}

void managerWindow::on_pushButton_16_clicked()
{
    QString name;
    QString ISSN;
    QString mailCode;
    QString CN;
    QString lan;
    QString publisher;
    QString pubp;
    QString year;
    QString editor;
    QString text;
    int label_1, label_2;

    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("Add Journal",
                         "Really start subscribing this Journal?",
                         "Yes", "No",
                         false,
                         QString(":/resources/information.png"));
    if (b->exec() == QDialog::Rejected)
        return ;

    name = ui->lineEdit_8->text();
    if (name.isEmpty())
    {/*
        QMessageBox::warning(this, "Sorry",
                             "We should know the name of the journal");*/
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Sorry",
                             "We should know the name of the journal",
                             "OK", "HaHa",
                             true,
                             QString(":/resources/warning.png"));
        b->exec();

        return ;
    }
    ISSN = ui->lineEdit_10->text();
    if (ISSN.isEmpty())
    {/*
        QMessageBox::warning(this, "Sorry",
                             "We should know the ISSN of the journal");*/
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Sorry",
                             "We should know the name of the journal",
                             "OK", "HaHa",
                             true,
                             QString(":/resources/warning.png"));
        b->exec();

        return ;
    }
    mailCode = ui->lineEdit_11->text();
    if (mailCode.isEmpty())
    {/*
        QMessageBox::warning(this, "Sorry",
                             "We should know the mailCode of the journal");*/
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Sorry",
                             "We should know the mailCode of the journal",
                             "OK", "HaHa",
                             true,
                             QString(":/resources/warning.png"));
        b->exec();

        return ;
    }
    CN = ui->lineEdit_14->text();
    if (CN.isEmpty())
    {/*
        QMessageBox::warning(this, "Sorry",
                             "We should know the CN of the journal");*/
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Sorry",
                             "We should know the CN of the journal",
                             "OK", "HaHa",
                             true,
                             QString(":/resources/warning.png"));
        b->exec();

        return ;
    }
    lan = ui->comboBox_8->currentText();
    publisher = ui->lineEdit_9->text();
    pubp = ui->comboBox_13->currentText();
    year = ui->comboBox_14->currentText();
    year += "-01-01";
    editor = ui->lineEdit_15->text();
    text = ui->textEdit->toPlainText();
    label_1 = ui->comboBox_15->currentIndex();
    label_2 = ui->comboBox_16->currentIndex();

    QSqlQuery query;

    query.exec(QString("insert into Journal "
                       "values('%1', '%2', '%3', '%4', '%5', '%6', "
                       "'%7', '%8', '%9', '%10', %11, %12, %13, %14, '')")
               .arg(name).arg(lan).arg(publisher).arg(year).arg(pubp)
               .arg(CN).arg(ISSN).arg(mailCode).arg(editor).arg(text)
               .arg(label_1).arg(label_2).arg(1).arg(5));

    if (!query.isActive())
        QMessageBox::warning(this, "Error",
                             query.lastError().text());

    setTreeContent();
}

void managerWindow::on_comboBox_15_currentIndexChanged(int index)
{
    if (index == EventManagement::FASHIONLE)
    {
        QStringList subMenu;

        subMenu << "时尚"
                << "影视音乐"
                << "旅游";

        ui->comboBox_16->clear();
        ui->comboBox_16->addItems(subMenu);
    }
    else if (index == EventManagement::HEALTHY)
    {
        QStringList subMenu;

        subMenu << "情感"
                << "保健养生"
                << "饮食";

        ui->comboBox_16->clear();
        ui->comboBox_16->addItems(subMenu);
    }
    else if (index == EventManagement::NEWS)
    {
        QStringList subMenu;

        subMenu << "时事新闻"
                << "军事"
                << "法治";

        ui->comboBox_16->clear();
        ui->comboBox_16->addItems(subMenu);
    }
    else if (index == EventManagement::LITERATURES)
    {
        QStringList subMenu;

        subMenu << "文摘"
                << "文学"
                << "文论";

        ui->comboBox_16->clear();
        ui->comboBox_16->addItems(subMenu);
    }
    else if (index == EventManagement::ACADEMICS)
    {
        QStringList subMenu;

        subMenu << "学校学报"
                << "经济学"
                << "自然科学"
                << "社会科学";

        ui->comboBox_16->clear();
        ui->comboBox_16->addItems(subMenu);
    }
}

void managerWindow::on_pushButton_9_clicked()
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



void managerWindow::on_pushButton_3_clicked()
{
    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("Update",
                         QString("<h3>Current Version: v1.1</h3> "
                                 "<p>You are already at the latest version "),
                         "OK",
                         "HaHa");

    b->exec();
}

void managerWindow::on_pushButton_5_clicked()
{
    ui->label_32->setHidden(false);
    ui->label_28->setHidden(true);
    ui->label_35->setHidden(true);
}


void managerWindow::on_pushButton_6_clicked()
{
    ui->label_32->setHidden(true);
    ui->label_28->setHidden(false);
    ui->label_35->setHidden(true);
}

void managerWindow::on_pushButton_7_clicked()
{
    ui->label_32->setHidden(true);
    ui->label_28->setHidden(true);
    ui->label_35->setHidden(false);
}

void managerWindow::on_pushButton_clicked()
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

    query.exec(QString("update Manager "
                       "set m_gender = '%1' "
                       "where m_id = '%2' ").arg(gender).arg(userID));
    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    birthday += ui->comboBox_5->currentText();
    birthday += "-" + ui->comboBox_11->currentText();
    birthday += "-" + ui->comboBox_12->currentText();

    query.exec(QString("update Manager "
                       "set m_birth = '%1' "
                       "where m_id = '%2' ").arg(birthday).arg(userID));
    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    pro = ui->provinces->currentText();
    cit = ui->citys->currentText();
    query.exec(QString("update Manager "
                       "set m_province = '%1' "
                       "where m_id = '%2' ").arg(pro).arg(userID));
    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    query.exec(QString("update Manager "
                       "set m_city = '%1' "
                       "where m_id = '%2' ").arg(cit).arg(userID));
    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    getInformation();
}

void managerWindow::on_home_red_bt_clicked()
{
    ui->reader_red->hide();
    ui->search_red->hide();
    ui->borrow_red->hide();
    ui->return_red->hide();
    ui->setting_red->hide();
    ui->love_red->hide();
    ui->home_red->show();

    ui->menu_tab->setCurrentIndex(6);
}

//===============================

void managerWindow::onProvinces(const QStringList &strList)
{
    QStringList::const_iterator citer = strList.constBegin();
    for ( ; citer != strList.constEnd(); ++citer) {
        ui->provinces->addItem(*citer);
    }
    ui->provinces->setCurrentIndex(0);
    cityManager_.getSupportCity(ui->provinces->currentText(), std::bind(&managerWindow::onCitys, this, std::placeholders::_1));
}

void managerWindow::onCitys(const QStringList &strList)
{
    ui->citys->clear();
    QStringList::const_iterator citer = strList.constBegin();
    for ( ; citer != strList.constEnd(); ++citer) {
        QString str = citer->left(citer->indexOf(QChar(' ')));
        ui->citys->addItem(str);
    }
}


void managerWindow::onWeather(const QStringList &strList)
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

void managerWindow::on_provinces_currentIndexChanged(const QString &provinceName)
{
    //showClear();
    cityManager_.getSupportCity(provinceName, std::bind(&managerWindow::onCitys, this, std::placeholders::_1));
}

void managerWindow::on_citys_currentIndexChanged(const QString &)
{
    //showClear();
}

void managerWindow::showClear()
{
    ui->labelImage1->clear();
    ui->labelImage2->clear();
    ui->labelTemperature->clear();
    ui->weather->clear();
    ui->labelWind->clear();

}

void managerWindow::on_findButton_clicked()
{
    cityManager_.getWeatherbyCityName(ui->citys->currentText(), std::bind(&managerWindow::onWeather, this, std::placeholders::_1));
}
//==============================================

void managerWindow::on_look_bt_clicked()
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

void managerWindow::on_pushButton_8_clicked()
{
    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("About",
                         QString("<h2>User Agreement</h2>"
                                 "<p>Actually, no user agreement "
                                 "<p>Do what you like!<p>"),
                         "OK", "HaHa");

    b->exec();
}
