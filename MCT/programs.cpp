#include "programs.h"
#include "ui_programs.h"
#include "programwindow.h"
#include "frequency.h"

Programs::Programs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Programs)
{
    ui->setupUi(this);
}

Programs::~Programs()
{
    delete ui;
}

void Programs::on_pushButton_clicked()
{
    ProgramWindow pWindow;
    pWindow.setModal(true);
    hide();
    pWindow.exec();
}

void Programs::on_pushButton_2_clicked()
{
    frequency fWindow;
    fWindow.setModal(true);
    hide();
    fWindow.exec();
}
