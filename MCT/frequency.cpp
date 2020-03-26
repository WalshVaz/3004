#include "frequency.h"
#include "ui_frequency.h"

frequency::frequency(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frequency)
{
    ui->setupUi(this);
}

frequency::~frequency()
{
    delete ui;
}
