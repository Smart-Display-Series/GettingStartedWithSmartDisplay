#include "setwidgetvalue.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SetWidgetValue w;
    w.show();
    return a.exec();
}
