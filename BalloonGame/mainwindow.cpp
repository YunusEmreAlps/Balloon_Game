#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <time.h>
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //---------------------------------

    Time = new QTimer() ;
    Time->start(1300) ;
    connect(Time,SIGNAL(timeout()),this,SLOT(Creator())) ;

    //---------------------------------

    Tot_Sec = new QTimer() ;
    Tot_Sec->start(1000) ;
    connect(Tot_Sec,SIGNAL(timeout()),this,SLOT(Print())) ;


   //---------------------------------

   // Background image

    QImage Back(":/Photo/Photo/Back.png") ;
    ui->Background->setScaledContents(true) ;
    ui->Background->setPixmap(QPixmap::fromImage(Back)) ;

   //---------------------------------

   // Random Number -> #include <time.h>

     srand(time(nullptr)) ; // -> use -> Random X Coordinate

   //---------------------------------

   // Balloon -> Create a Random X Coordinate and Same Y Coordinate

   //---------------------------------

    Creator() ; // Balloon Creator -> But This Function Create

   //---------------------------------

    Print() ;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Creator()
{
    int X = rand()%1051+ 50 ; // Max_X : 1200 , Min_X : 50

     Action *action = new Action(this);
     Photo.push_back(action) ;

     Random_Ball = rand()%7+1 ; // Max : 7 , Min : 1

     action->X_Coor=X ;
     action->Ball_Num=Random_Ball ; // Create Balloon
     action -> mainframe = this ;


     Total++ ;
     action->show() ;

}

void MainWindow::Count()
{
    Counter++ ;

    ui->Correct->setStyleSheet("color:rgb(0, 170, 127) ;") ;
    ui->Correct->setText("Correct : "+QString::number(Counter-1)+"") ;

    Result = Total-Counter ;

    ui->inCorrect->setStyleSheet("color:rgb(255, 0, 0) ;") ;
    ui->inCorrect->setText("inCorrect : "+QString::number(Result)+"") ;  // Ekranda açılmamış olan bütün kartları ve Kaçan balon sayısının toplamını göstermektedir .

    ui->Tot->setText("Total : "+QString::number(Total-1) +"") ;



}

void MainWindow::Print()
{
  Seco++ ;
  ui->Second->setStyleSheet("color:rgb(170, 0, 127);") ;
  ui->Second->setText("Second : "+QString::number(Seco)+ "") ;
}

/*void MainWindow::Crea()
{
    int X = rand()%1051+ 50 ; // Max_X : 1200 , Min_X : 50

     Action *action = new Action(this);
     Photo.push_back(action) ;

     Random_Ball = rand()%7+1 ; // Max : 7 , Min : 1

     action->X_Coor=X ;
     action->Ball_Num=Random_Ball ; // Create Balloon
     action -> mainframe = this ;

     Total++ ;
     action->show() ;
}*/










