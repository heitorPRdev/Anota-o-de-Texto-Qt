#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <QFileDialog>
#include <iostream>
#include <string>
#include <QString>
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
{
    this -> ui.setupUi(this);
    connect(this -> ui.btnNovo,SIGNAL(clicked()), this, SLOT(criar()));
    connect(this ->  ui.btnSalvar, SIGNAL(clicked()), this , SLOT(salvar()));
    connect(this -> ui.btnAbrir, SIGNAL(clicked(bool)), this, SLOT(abrir()));

}

MainWindow::~MainWindow()
{

}
void MainWindow::iniciar(void){
    this -> ui.lbSave -> setText("");
    this -> ui.leArquiv -> setText("Arquivo não Salvo");

}

void MainWindow::criar(void){
    this -> ui.leArquiv -> setText("Arquivo não Salvo");
    this -> ui.td_ -> setText("");

}
void MainWindow::salvar(void){

    QString filePath = QFileDialog::getSaveFileName(this, QObject::tr("Salvar"),
                                                    "C:/", "Text files (*.txt)");

    std::ofstream file;
    file.open(filePath.toStdString());
    file << ui.td_ -> toPlainText().toStdString();
    file.close();
    this -> ui.leArquiv -> setText(filePath);
    this -> ui.lbSave -> setText("Arquivo Salvo");
}

void MainWindow::abrir(){
    std::string filePath = QFileDialog::getOpenFileName(this, QObject::tr("Abrir"),
                                                    "C:/", "Text files (*.txt)").toStdString();
    std::string line;
    std::ifstream file(filePath);
    this -> ui.td_ -> setText("");
    this -> ui.leArquiv -> setText(QString::fromStdString(filePath));
    if(file.is_open()){

        while(std::getline(file,line)){
            std::cout << line << std::endl;
            this -> ui.td_ -> setPlainText(QString::fromStdString(line));
        }

    }
    file.close();


}

