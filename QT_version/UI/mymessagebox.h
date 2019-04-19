#ifndef MYMESSAGEBOX_H
#define MYMESSAGEBOX_H

#include <QDialog>
#include <QMouseEvent>

namespace Ui {
class MyMessageBox;
}

class MyMessageBox : public QDialog
{
    Q_OBJECT
    
public:
    explicit MyMessageBox(QWidget *parent = 0);
    ~MyMessageBox();

    void setBoxInformation(QString title,
                           QString tips,
                           QString okText,
                           QString cancelText,
                           bool isCancelHidden = true,
                           QString pixmap = ":/small_unit/book.png");
    
private:
    Ui::MyMessageBox *ui;

    bool mouse_press;
    QPoint move_point;

protected:
    void mousePressEvent(QMouseEvent * event);
    void mouseReleaseEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *event);

signals:
    void okClicked();
    void cancelClicked();

public slots:
    void handleOkClicked();
    void handleCancelClicked();
};

#endif // MYMESSAGEBOX_H
