#include "mainwindow.h"
#include "bubblesorter.h"
#include "insertsorter.h"
#include "selectsorter.h"
#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
