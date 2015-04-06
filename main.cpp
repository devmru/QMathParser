#include <QtGui/QApplication>
#include <QtGui/QCleanlooksStyle>
#include "qmathparser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMathParser w;
    w.show();
//    a.setStyle(new QCleanlooksStyle);

    return a.exec();
}
