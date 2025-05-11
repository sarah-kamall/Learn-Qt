#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // creating obj called main window inhereting from main window
    MainWindow w;
    w.show();






    return a.exec();
}
