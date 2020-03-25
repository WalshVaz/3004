#ifndef FREQUENCY_H
#define FREQUENCY_H

#include <QDialog>

namespace Ui {
class frequency;
}

class frequency : public QDialog
{
    Q_OBJECT

public:
    explicit frequency(QWidget *parent = nullptr);
    ~frequency();

private:
    Ui::frequency *ui;
};

#endif // FREQUENCY_H
