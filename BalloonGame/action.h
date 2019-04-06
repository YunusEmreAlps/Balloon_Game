#ifndef ACTION_H
#define ACTION_H

#include <QLabel>

class MainWindow ;

class Action : public QLabel
{
    Q_OBJECT
public:
    explicit Action(QWidget *parent = nullptr);

    MainWindow *mainframe ;

    int X_Coor ; // X Coordinate

    int Ball_Num ; // Balloon png Number ->

    int Sec = 0 ;

    bool Click = false ;  // Clicked or Not

    bool Act = false ;

    int C = 0 ;

signals:

public slots:

    void Act_Balloon() ;   // Action Function ->   Y + 10

    void mousePressEvent(QMouseEvent *) ;

private:

private slots:



};

#endif // ACTION_H
