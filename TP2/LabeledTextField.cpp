//
// Created by win on 18/03/2020.
//

#include "LabeledTextField.h"

LabeledTextField::LabeledTextField(QString name)
{
    text = new QTextEdit();
    label = new QLabel(name);

    QHBoxLayout* layout = new QHBoxLayout();

    layout->addWidget(label);
    text->setMaximumHeight(20);
    layout->addWidget(text);


    this->setLayout(layout);


}