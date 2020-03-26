#ifndef ELECTRODES_H
#define ELECTRODES_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class Electrodes;
}

class Electrodes : public QDialog
{
    Q_OBJECT

public:
    explicit Electrodes(QWidget *parent = nullptr);
    ~Electrodes();


private slots:
    void on_pushButton_clicked();

private:
    Ui::Electrodes *ui;
    QTimer *timer;
};

#endif // ELECTRODES_H
