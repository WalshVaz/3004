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
    ui->listWidget->insertItem(0,"SKIN ON");
    ui->listWidget->insertItem(1, stringTime);


}
void MainWindow::on_pushButton_5_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();

    if(item->text() == "Programs"){
        ui->listWidget->clear();
        ui->listWidget->addItem("Pain");
        ui->listWidget->addItem("Head");
        ui->listWidget->addItem("Cold");
        ui->listWidget->addItem("Trauma");

    }

   else if(item->text() == "Frequency"){
        ui->listWidget->clear();
        ui->listWidget->addItem("9Hz - 10Hz");
        ui->listWidget->addItem("20Hz");
        ui->listWidget->addItem("40Hz");
        ui->listWidget->addItem("60Hz");
        ui->listWidget->addItem("80Hz");
        ui->listWidget->addItem("100Hz");
        ui->listWidget->addItem("120Hz");

    }

    else if(item->text() == "Settings"){
         ui->listWidget->clear();
         ui->listWidget->addItem("Brightness");
         ui->listWidget->addItem("Children Mode");
         ui->listWidget->addItem("Economy");
         ui->listWidget->addItem("Sound");
        // ui->listWidget->setItemWidget(item, )
     }

    else if(item->text() == "Pain"){
        ui->listWidget->clear();
        skinOff();
    }

    else if(item->text() == "Head"){
        ui->listWidget->clear();
        skinOff();
    }

    else if(item->text() == "Cold"){
        ui->listWidget->clear();
        skinOff();
      }

    else if(item->text() == "Trauma"){
        ui->listWidget->clear();
        skinOff();
    }

    else if(item->text() == "Brightness"){
        ui->listWidget->clear();
    }

    else if(item->text() == "Children Mode"){
        ui->listWidget->clear();
    }

    else if(item->text() == "Economy"){
        ui->listWidget->clear();
    }

    else if(item->text() == "Sound"){
        ui->listWidget->clear();
    }



}

void MainWindow::on_pushButton_clicked()
{
    int currentIndex = ui->listWidget->currentRow();
    QListWidgetItem *item = ui->listWidget->currentItem();
    ui->listWidget->insertItem(currentIndex - 1, item);
    ui->listWidget->setCurrentRow(currentIndex - 1);

}

void MainWindow::on_pushButton_4_clicked()
{
    int currentIndex = ui->listWidget->currentRow();
    QListWidgetItem *item = ui->listWidget->currentItem();
    ui->listWidget->insertItem(currentIndex+1, item);
    ui->listWidget->setCurrentRow(currentIndex+1);

}

void MainWindow::on_pushButton_6_clicked()
{
    ui->listWidget->clear();
    ui->listWidget->addItem("Programs");
    ui->listWidget->addItem("Frequency");
    ui->listWidget->addItem("Settings");


    time->stop();
    timer.setHMS(0,0,0);

}


void MainWindow::on_pushButton_8_clicked()
{
    //QListWidgetItem *item = ui->listWidget->currentItem();

}
