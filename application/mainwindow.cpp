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
    ui->stackedWidget->setCurrentIndex(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onTime()
{
    QTime timer = QTime::currentTime();
    QString time_next = timer.toString("hh : mm : ss");
    ui->info->setText(time_next);
}



void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->progressBar->setValue(value);
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    ui->progressBar_2->setValue(value);
}

void MainWindow::on_pushButton_3_clicked()
{
     ui->info->setText("Economy mode is ON");
}

void MainWindow::on_pushButton_4_clicked()
{
    time->start(1000); // timer starts
    connect(time, SIGNAL(timeout()), this, SLOT(onTime()));
}


void MainWindow::on_set_clicked()
{
    for (int i = 0; i < 3; i++) {
      ui->stackedWidget->setCurrentIndex(i);
    }

}

void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
