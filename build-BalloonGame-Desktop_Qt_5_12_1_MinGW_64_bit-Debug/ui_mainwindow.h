/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Second;
    QLabel *Correct;
    QLabel *inCorrect;
    QLabel *Background;
    QLabel *Tot;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Second = new QLabel(centralWidget);
        Second->setObjectName(QString::fromUtf8("Second"));
        Second->setGeometry(QRect(50, 50, 200, 30));
        Second->setMouseTracking(false);
        Second->setLineWidth(1);
        Second->setAlignment(Qt::AlignCenter);
        Correct = new QLabel(centralWidget);
        Correct->setObjectName(QString::fromUtf8("Correct"));
        Correct->setGeometry(QRect(260, 50, 200, 30));
        Correct->setMouseTracking(false);
        Correct->setLineWidth(1);
        Correct->setAlignment(Qt::AlignCenter);
        inCorrect = new QLabel(centralWidget);
        inCorrect->setObjectName(QString::fromUtf8("inCorrect"));
        inCorrect->setGeometry(QRect(470, 50, 200, 30));
        inCorrect->setMouseTracking(false);
        inCorrect->setLineWidth(1);
        inCorrect->setAlignment(Qt::AlignCenter);
        Background = new QLabel(centralWidget);
        Background->setObjectName(QString::fromUtf8("Background"));
        Background->setGeometry(QRect(50, 100, 1100, 700));
        Background->setMouseTracking(true);
        Background->setFrameShape(QFrame::Box);
        Background->setScaledContents(false);
        Tot = new QLabel(centralWidget);
        Tot->setObjectName(QString::fromUtf8("Tot"));
        Tot->setGeometry(QRect(680, 50, 200, 30));
        Tot->setMouseTracking(false);
        Tot->setLineWidth(1);
        Tot->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Second->setText(QString());
        Correct->setText(QString());
        inCorrect->setText(QString());
        Background->setText(QString());
        Tot->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
