#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->addItem("Programs");
    ui->listWidget->addItem("Frequency");
    ui->listWidget->addItem("Settings");



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_5_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();

    if(item->text() == "Programs"){
        ui->listWidget->clear();
        ui->listWidget->addItem("Pain");
        ui->listWidget->addItem("Head");
        ui->listWidget->addItem("Cold");
        ui->listWidget->addItem("Tramua");

    }

   else if(item->text() == "Frequency"){
        ui->listWidget->clear();
        ui->listWidget->addItem("9Hz- 10hz");
        ui->listWidget->addItem("20hz");
        ui->listWidget->addItem("40hz");
        ui->listWidget->addItem("60hz");
        ui->listWidget->addItem("80hz");
        ui->listWidget->addItem("100hz");
        ui->listWidget->addItem("120hz");
       // ui->listWidget->setItemWidget(item, )
    }

    else if(item->text() == "Settings"){
         ui->listWidget->clear();
         ui->listWidget->addItem("Brightness");
         ui->listWidget->addItem("Children Mode");
         ui->listWidget->addItem("Ecomomy");
         ui->listWidget->addItem("Sound");
        // ui->listWidget->setItemWidget(item, )
     }


}

void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->verticalScrollBar();
}

void MainWindow::on_pushButton_4_clicked()
{
   ui->listWidget->horizontalScrollBar();
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->listWidget->clear();
    ui->listWidget->addItem("Programs");
    ui->listWidget->addItem("Frequency");
    ui->listWidget->addItem("Settings");

}

void MainWindow::on_pushButton_7_clicked()
{

}
