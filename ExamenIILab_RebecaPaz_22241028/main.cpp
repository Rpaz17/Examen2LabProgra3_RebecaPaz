#include "cframe.h"
#include <QApplication>

using namespace Rebeca;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    cframe w;
    w.show();
    return a.exec();
}
