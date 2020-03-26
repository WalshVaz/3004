#include "electrodes.h"
#include "ui_electrodes.h"
#include <QDateTime>

Electrodes::Electrodes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Electrodes)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(on_pushButton_clicked()));

}

Electrodes::~Electrodes()
{
    delete ui;
}

void Electrodes::on_pushButton_clicked()
{
    timer->start(1000);
    QTime stopwatch = QTime :: currentTime();
    QString text = stopwatch.toString("hh : mm : ss ");
    ui->label->setText(text);
    ui->label_2->setText("Skin on");

}
