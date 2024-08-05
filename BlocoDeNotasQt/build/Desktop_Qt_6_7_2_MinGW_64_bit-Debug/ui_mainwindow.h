/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *td_;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *leArquiv;
    QLabel *lbSave;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNovo;
    QPushButton *btnAbrir;
    QPushButton *btnSalvar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        td_ = new QTextEdit(centralwidget);
        td_->setObjectName("td_");
        td_->setGeometry(QRect(10, 40, 781, 511));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 462, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        leArquiv = new QLabel(layoutWidget);
        leArquiv->setObjectName("leArquiv");
        QFont font;
        font.setPointSize(16);
        leArquiv->setFont(font);

        horizontalLayout_2->addWidget(leArquiv);

        lbSave = new QLabel(layoutWidget);
        lbSave->setObjectName("lbSave");
        lbSave->setFont(font);

        horizontalLayout_2->addWidget(lbSave);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnNovo = new QPushButton(layoutWidget);
        btnNovo->setObjectName("btnNovo");

        horizontalLayout->addWidget(btnNovo);

        btnAbrir = new QPushButton(layoutWidget);
        btnAbrir->setObjectName("btnAbrir");

        horizontalLayout->addWidget(btnAbrir);

        btnSalvar = new QPushButton(layoutWidget);
        btnSalvar->setObjectName("btnSalvar");

        horizontalLayout->addWidget(btnSalvar);


        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        leArquiv->setText(QString());
        lbSave->setText(QString());
        btnNovo->setText(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        btnAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        btnSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
