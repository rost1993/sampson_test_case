#include "multiplicationtable.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    multiplicationTable w;
    w.show();
    return a.exec();
}
