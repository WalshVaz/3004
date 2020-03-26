#include "programs.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Programs w;
    w.show();

    return a.exec();
}
