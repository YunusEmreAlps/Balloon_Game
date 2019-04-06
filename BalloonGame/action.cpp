#include "action.h"
#include "mainwindow.h"
#include  <QThread>
#include <QApplication>

Action::Action(QWidget *parent) : QLabel(parent)
{
     QTimer *Time_2 = new QTimer() ;
     connect(Time_2,SIGNAL(timeout()),this,SLOT(Act_Balloon())) ;
     setGeometry(X_Coor,100,50,50) ;
     show() ;

     Click = false ;
     Act = false ;
     Time_2->start(50) ;
}

void Action::Act_Balloon()
{
    if(Click == false)
    {
        QImage Ball(":/Photo/Photo/"+QString::number(Ball_Num)+".png") ;
        setScaledContents(true) ;
        setPixmap(QPixmap::fromImage(Ball)) ;
        setGeometry(X_Coor,y()+10,50,50)  ;
        Act = true ;




    }

}


void Action::mousePressEvent(QMouseEvent *e)
{

    if(Act == true)
    {
        Click = !Click ;
        setGeometry(X_Coor,y(),50,50)  ;
        setEnabled(false) ;

        QImage Boom(":/Photo/Photo/Boom.png") ;
        setScaledContents(true) ;
        setPixmap(QPixmap::fromImage(Boom)) ; 
        Act = false;
        mainframe->Count() ;

        QApplication::processEvents() ;
        QThread::sleep(1) ;

        setGeometry(0,0,0,0) ;

    }

}




