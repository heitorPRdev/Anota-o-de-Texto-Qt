#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
{
    this -> ui.setupUi(this);
    connect(this -> ui.btnNovo,SIGNAL(clicked()), this, SLOT(criar()));

}

MainWindow::~MainWindow()
{

}
void MainWindow::criar(void){

}
