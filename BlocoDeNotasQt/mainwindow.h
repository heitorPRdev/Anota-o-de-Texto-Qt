#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();
        void iniciar(void);
    private:
        Ui::MainWindow ui;
    private slots:
        void criar(void);
        //void salvar(void);
        //void abrir(void);
};
#endif // MAINWINDOW_H
