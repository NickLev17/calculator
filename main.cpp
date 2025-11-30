#include "mainwindow.h"

#include <QApplication>
#include <QIcon>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Калькулятор");
    w.setWindowOpacity(0.95);
   QIcon icon("pix.ico");
    w.setWindowIcon(icon);
    w.show();
    return a.exec();
}
