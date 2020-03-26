#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void skinOff();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *time;
    QTime timer;
};

#endif // MAINWINDOW_H
