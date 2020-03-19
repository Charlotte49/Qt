//
// Created by win on 13/02/2020.
//

#include "ButtonsPanel.h"

ButtonsPanel::ButtonsPanel()
{
    button1 = new QPushButton("Configure");
    button2 = new QPushButton("Connect");
    button3 = new QPushButton("Disconnect");

    QHBoxLayout* layout = new QHBoxLayout();

    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);

    this->setLayout(layout);
}
