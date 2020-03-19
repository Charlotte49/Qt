//
// Created by win on 13/02/2020.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPushButton>
#include <QTextEdit>

class MainWindow : public QMainWindow {
Q_OBJECT
public:
    MainWindow(QWidget* parent = nullptr);
    virtual ~MainWindow(){};
private:
    QPushButton* button;
    QTextEdit* textedit;
    QPushButton *Parent;
    QPushButton *fils;
};
#endif //TP1QT_MAINWINDOW_H
