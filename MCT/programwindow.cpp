#include "programwindow.h"
#include "ui_programwindow.h"
#include "programs.h"

ProgramWindow::ProgramWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProgramWindow)
{
    ui->setupUi(this);
}

ProgramWindow::~ProgramWindow()
{
    delete ui;
}



void ProgramWindow::on_pushButton_clicked()
{

}
