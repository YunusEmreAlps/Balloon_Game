#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QTimer>
#include <QMouseEvent>
#include "action.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

     QList<Action*>Photo ; // Photo Array

     QTimer *Time ; // - 1s - new Balloon -1s- new Balloon - 1s - ...

     QTimer *Tot_Sec ;


     void Count() ; // Correct

     int Seco = 0 ;

     int Counter = 1 ; // Seconds

     int Random_Ball ; // Balloon png number

     int Total= 1 ; // Total Balloon number

     int Result = 0 ; // inCorrect

     int iCr = 0 ;


private slots :


     void Print() ;

    // void Crea() ;

     void Creator() ; // Balloon Creator


private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
