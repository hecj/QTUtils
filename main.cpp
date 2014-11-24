#include "qtutils.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTUtils w;
    w.show();
    return a.exec();
}
