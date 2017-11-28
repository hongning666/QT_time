#ifndef MYTIME_H
#define MYTIME_H

#include <QDialog>
#include <QTimer>
namespace Ui {
class MyTime;
}

class MyTime : public QDialog
{
    Q_OBJECT
    
public:
    explicit MyTime(QWidget *parent = 0);
    ~MyTime();
    
private:
    Ui::MyTime *ui;
    QTimer *mytimer;

public slots:
    void setTime();

};

#endif // MYTIME_H
