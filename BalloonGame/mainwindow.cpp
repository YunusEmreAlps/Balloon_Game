#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <time.h>
#include <QTime>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //---------------------------------

    Time = new QTimer() ;

    if(Control == false )
    {
      Time->start(1300) ;
    }
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

void MainWindow::on_actionEasy_triggered()
{
   Time->start(1300) ;
   Tot_Sec->start(1000) ;

   ui->actionEasy->setChecked(true) ;
   ui->actionMedium->setChecked(false) ;
   ui->actionHard->setChecked(false) ;
   ui->actionUltra_Hard->setChecked(false);

   ui->Mode->setStyleSheet("color:rgb(18, 200, 94) ;") ;
   ui->Mode->setText("Mode : Easy ") ;

   Control = true ;

}

void MainWindow::on_actionMedium_triggered()
{
    Time->start(1000) ;
    Tot_Sec->start(1000) ;

   ui->actionEasy->setChecked(false) ;
    ui->actionMedium->setChecked(true) ;
    ui->actionHard->setChecked(false) ;
    ui->actionUltra_Hard->setChecked(false);


    ui->Mode->setStyleSheet("color:rgb(83, 26, 255) ;") ;
    ui->Mode->setText("Mode : Medium ") ;

    Control = true ;
}

void MainWindow::on_actionHard_triggered()
{
     Time->start(800) ;
     Tot_Sec->start(1000) ;

     ui->actionEasy->setChecked(false) ;
     ui->actionMedium->setChecked(false) ;
     ui->actionHard->setChecked(true) ;
     ui->actionUltra_Hard->setChecked(false);


     ui->Mode->setStyleSheet("color:rgb(255, 10, 46) ;") ;
     ui->Mode->setText("Mode : Hard ") ;

     Control = true ;
}

void MainWindow::on_actionUltra_Hard_triggered()
{
    Time->start(500) ;
    Tot_Sec->start(1000) ;

    ui->actionEasy->setChecked(false) ;
    ui->actionMedium->setChecked(false) ;
    ui->actionHard->setChecked(false) ;
    ui->actionUltra_Hard->setChecked(true);


    ui->Mode->setStyleSheet("color:rgb(170, 0, 0);") ;
    ui->Mode->setText("Mode : Very Hard ") ;

    Control = true ;
}


void MainWindow::on_actionExit_triggered()
{
    Time->stop() ;
    Tot_Sec->stop() ;

    // Exit Tusuna bastıktan sonra ( son balonları patlatın ) ve  Score gormek icin Lutfen Exit tusuna bir kez daha basın .

    ui->actionEasy->setChecked(false) ;
    ui->actionMedium->setChecked(false) ;
    ui->actionHard->setChecked(false) ;
    ui->actionExit->setChecked(true) ;

   if(((Counter-1)+Result)==(Total-1))
   {
     QMessageBox::information(this," Score "," Second : "+QString::number(Seco)+"\n Correct : "+QString::number(Counter-1)+" \n inCorrect : "+QString::number(Result)+" \n Total : "+QString::number(Total-1)+"") ;

   }
}

