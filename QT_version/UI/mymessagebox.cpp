#include "mymessagebox.h"
#include "ui_mymessagebox.h"
#include <QFont>

MyMessageBox::MyMessageBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyMessageBox)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);   //关闭后delete以防内存泄漏
    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏

    //QFont font = ui->labelTitle->font();
    //font.setBold(true);
    //ui->labelTitle->setFont(font);

    ui->labelTips->setWordWrap(true);
    ui->labelTips->setAlignment(Qt::AlignTop);

    //setFixedHeight(sizeHint().height());
    //setFixedWidth(sizeHint().width());

    connect(ui->toolButtonClose, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->toolButtonOK, SIGNAL(clicked()), this, SLOT(handleOkClicked()));
    connect(ui->toolButtonCancel, SIGNAL(clicked()), this, SLOT(handleCancelClicked()));

    this->move((parent->width() - this->width())/2, (parent->height() - this->height())/2);
}

MyMessageBox::~MyMessageBox()
{
    delete ui;
}

void MyMessageBox::mousePressEvent(QMouseEvent *event)
{
    //只能是鼠标左键移动和改变大小
    if (event->button() == Qt::LeftButton) {
        mouse_press = true;
    }
    //窗口移动距离
    move_point = event->globalPos() - pos();
}

void MyMessageBox::mouseReleaseEvent(QMouseEvent *)
{
    mouse_press = false;
}

void MyMessageBox::mouseMoveEvent(QMouseEvent *event)
{
    //移动窗口
    if (mouse_press) {
        QPoint move_pos = event->globalPos();
        move(move_pos - move_point);
    }
}

void MyMessageBox::setBoxInformation(QString title,
                                     QString tips,
                                     QString okText,
                                     QString cancelText,
                                     bool isCancelHidden,
                                     QString pixmap
                                     )
{
    ui->labelTitle->setText(QString("  ") + title);
    //设置提示信息
    ui->labelTips->setText(tips);
    //ui->labelIcon->setPixmap(pixmap);
    ui->labelIcon->setStyleSheet(QString("border-image: url(%1);").arg(pixmap));

    ui->toolButtonOK->setText(okText);
    ui->toolButtonCancel->setText(cancelText);
    //是否隐藏取消按钮
    ui->toolButtonCancel->setHidden(isCancelHidden);
    //设置默认按钮为取消按钮
    ui->toolButtonCancel->setFocus();    
}

void MyMessageBox::handleOkClicked()
{
    emit okClicked();
    this->accept();
}
void MyMessageBox::handleCancelClicked()
{
    emit cancelClicked();
    this->reject();
}
