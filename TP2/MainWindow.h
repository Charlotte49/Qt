//
// Created by win on 13/02/2020.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPushButton>
#include <QTextEdit>
#include "ButtonsPanel.h"

class SQLClientWindow : public QMainWindow {
    Q_OBJECT
public:
    SQLClientWindow();
private:
    QTextEdit *notificationPanel;
    QTableWidget *resultTable;
};
#endif //TP1QT_MAINWINDOW_H
