#include "mytime.h"
#include "ui_mytime.h"
#include <QTime>
MyTime::MyTime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyTime)
{
    ui->setupUi(this);
    mytimer = new QTimer();
    mytimer->setInterval(100);
    mytimer->start();
    connect(mytimer,SIGNAL(timeout()),
            this,SLOT(setTime()));
}


void MyTime::setTime(){
    QString timestr =
            QTime::currentTime().toString("hh:mm:ss");
    ui->showTime->setText(timestr);

}

MyTime::~MyTime()
{
    delete ui;
}
