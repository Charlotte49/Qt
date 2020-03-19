//
// Created by win on 13/02/2020.
//

#include "MainWindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent)
{
    this->setWindowTitle("My window");

    this->setMinimumWidth(500);
    QWidget *mainWidget = new QWidget();
    mainWidget->setFixedSize(100,50);

    QVBoxLayout *mainLayout = new QVBoxLayout();

    this->button = new QPushButton("My first button");

    mainLayout->addWidget(button);

    button->setToolTip("Texte qui apparait");

    this->Parent= new QPushButton("parent");
    this->fils = new QPushButton ("fils", mainWidget);

    fils->setGeometry(10,10,80,30);

    mainLayout->addWidget(Parent);



    QFont font ("Courier", 16,2);
    button->setFont(font);

    mainWidget->setLayout(mainLayout);
    this->setCentralWidget(mainWidget);
    hkgjhhjhk
}

