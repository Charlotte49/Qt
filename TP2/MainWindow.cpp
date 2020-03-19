//
// Created by win on 13/02/2020.
//

#include "MainWindow.h"
#include "ButtonsPanel.h"
#include <QVBoxLayout>

SQLClientWindow::SQLClientWindow() : QMainWindow()
{
    ButtonsPanel b;

    this->setWindowTitle("SQL Client");
    this->setMinimumSize(600,400);

    QWidget *mainWidget = new QWidget();

    QVBoxLayout *mainLayout=new QVBoxLayout();
    mainWidget->setLayout(mainLayout);

    ButtonsPanel *menu = new ButtonsPanel();
    mainLayout->addWidget(menu);

    notificationPanel = new QTextEdit();

    mainLayout->addWidget(notificationPanel);

    resultTable = new QTableWidget();
    resultTable->setColumnCount(3);
    resultTable->setRowCount(5);

    mainLayout->addWidget(resultTable);
    resultTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    this->setCentralWidget(mainWidget);
    
}

