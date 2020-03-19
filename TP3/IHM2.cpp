//
// Created by win on 18/03/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "IHM2.h"
#include <string>
#include <iostream>

IHM2::IHM2()
{
    this->setWindowTitle("IHM");
    this->setMinimumSize(200,200);

    QVBoxLayout *mainLayout=new QVBoxLayout();
    this->setLayout(mainLayout);

    button=new QPushButton("fils");

    text=new QTextEdit("texte initial \n");

    mainLayout->addWidget(button);
    mainLayout->addWidget(text);

    win=new IHM1();

    action4();
}

void IHM2::action1()
{
    connect(button, SIGNAL (clicked()), this, SLOT (close()));
}

void IHM2::action2()
{

    connect(button, SIGNAL (clicked()), this, SLOT (slotAction2()));
}

void IHM2::action3()
{
    connect(button, SIGNAL (clicked()), this, SLOT (slotAction3()));
}

void IHM2::action4()
{
    connect(button, SIGNAL (clicked()), win, SLOT (show()));
}


QPushButton *IHM2::getButton() const
{
    return button;
}

void IHM2::slotAction2()
{
    this->click++;
    button->setText("Button" + QString::number(click));
    std::cout << "Button " << click << std::endl;
}

void IHM2::slotAction3()
{
    this->click++;
    button->setText("Button" + QString::number(click));
    text->setText(text->toPlainText()+ "\n"+"Button" + QString::number(click));
    std::cout << "Button " << click << std::endl;

}