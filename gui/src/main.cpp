#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication genArtTool(argc, argv);
    
    MainWindow mainwindow;

    mainwindow.show();
    //UDPServer client;
    
    //client.HelloUDP();
    
    return genArtTool.exec();
}
