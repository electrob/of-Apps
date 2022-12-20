#include "mainwindow.h"
#include "ui_art_tool.h"

//#include <Debug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::_state_0(void) {
    
    qDebug("%s", qUtf8Printable("State : 0"));
}

void MainWindow::_state_1(void) {

    qDebug("%s", qUtf8Printable("State : 1"));
}

void MainWindow::_state_2(void) {

    qDebug("%s", qUtf8Printable("State : 2"));
}

void MainWindow::_state_3(void) {

    qDebug("%s", qUtf8Printable("State : 3"));
}


MainWindow::~MainWindow()
{
    delete ui;
}

