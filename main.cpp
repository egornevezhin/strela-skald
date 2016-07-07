#include "strela.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Strela w;
    w.show();

    return a.exec();
}
