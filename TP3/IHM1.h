//
// Created by win on 13/02/2020.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QObject>
#include <QtWidgets/QMainWindow>

class IHM1 : public QMainWindow{
    Q_OBJECT
public:
    IHM1();
private:
    QProgressBar* bar;
    QSlider* slider;

//public slots:
    //void slotSetValue(int val);

};
#endif //TP1QT_MAINWINDOW_H
