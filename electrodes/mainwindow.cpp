#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    time = new QTimer(this);
    connect(time, SIGNAL(timeout()), this, SLOT(skinOff()));
    timer.setHMS(0,0,0);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::skinOff()
{
    time->start(1000); // timer starts

    timer = timer.addSecs(1); // adds 1 second
    QString stringTime = timer.toString("hh : mm : ss"); // converts the time object to a string
    ui->label->setText(stringTime);
    ui->label_2->setText("SKIN ON");


}


void MainWindow::on_pushButton_clicked()
{  

    if (time->isActive()){ // when timer is running
        time->stop(); // stops the timer
        timer.setHMS(0,0,0); // resets timer
        ui->label_2->setText("SKIN OFF");
    }
    else{
        time->start(); // start time
    }
}

