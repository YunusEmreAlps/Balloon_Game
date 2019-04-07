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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEasy;
    QAction *actionMedium;
    QAction *actionHard;
    QAction *actionExit;
    QWidget *centralWidget;
    QLabel *Second;
    QLabel *Correct;
    QLabel *inCorrect;
    QLabel *Background;
    QLabel *Tot;
    QLabel *Mode;
    QMenuBar *menuBar;
    QMenu *menuLevel;
    QMenu *menuExit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        actionEasy = new QAction(MainWindow);
        actionEasy->setObjectName(QString::fromUtf8("actionEasy"));
        actionEasy->setCheckable(true);
        actionEasy->setChecked(true);
        actionEasy->setEnabled(true);
        actionEasy->setAutoRepeat(true);
        actionEasy->setMenuRole(QAction::NoRole);
        actionMedium = new QAction(MainWindow);
        actionMedium->setObjectName(QString::fromUtf8("actionMedium"));
        actionMedium->setCheckable(true);
        actionMedium->setEnabled(true);
        actionMedium->setMenuRole(QAction::NoRole);
        actionHard = new QAction(MainWindow);
        actionHard->setObjectName(QString::fromUtf8("actionHard"));
        actionHard->setCheckable(true);
        actionHard->setEnabled(true);
        actionHard->setMenuRole(QAction::NoRole);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setCheckable(true);
        actionExit->setMenuRole(QAction::QuitRole);
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
        Mode = new QLabel(centralWidget);
        Mode->setObjectName(QString::fromUtf8("Mode"));
        Mode->setGeometry(QRect(890, 50, 200, 30));
        Mode->setMouseTracking(false);
        Mode->setLineWidth(1);
        Mode->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 21));
        menuLevel = new QMenu(menuBar);
        menuLevel->setObjectName(QString::fromUtf8("menuLevel"));
        menuExit = new QMenu(menuBar);
        menuExit->setObjectName(QString::fromUtf8("menuExit"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuLevel->menuAction());
        menuBar->addAction(menuExit->menuAction());
        menuLevel->addAction(actionEasy);
        menuLevel->addAction(actionMedium);
        menuLevel->addAction(actionHard);
        menuExit->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEasy->setText(QApplication::translate("MainWindow", "Easy", nullptr));
        actionMedium->setText(QApplication::translate("MainWindow", "Medium", nullptr));
        actionHard->setText(QApplication::translate("MainWindow", "Hard", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        Second->setText(QString());
        Correct->setText(QString());
        inCorrect->setText(QString());
        Background->setText(QString());
        Tot->setText(QString());
        Mode->setText(QString());
        menuLevel->setTitle(QApplication::translate("MainWindow", "Level", nullptr));
        menuExit->setTitle(QApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
