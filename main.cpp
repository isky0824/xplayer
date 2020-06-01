#include "WidgetPlayer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WidgetPlayer w;
    w.show();
    return a.exec();
}
