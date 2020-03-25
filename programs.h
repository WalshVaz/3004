#ifndef PROGRAMS_H
#define PROGRAMS_H

#include <QMainWindow>

namespace Ui {
class Programs;
}

class Programs : public QMainWindow
{
    Q_OBJECT

public:
    explicit Programs(QWidget *parent = nullptr);
    ~Programs();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Programs *ui;
};

#endif // PROGRAMS_H
