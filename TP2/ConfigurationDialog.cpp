//
// Created by win on 18/03/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "ConfigurationDialog.h"
#include "LabeledTextField.h"

ConfigurationDialog::ConfigurationDialog()
{
    this->setWindowTitle("Configuration");
    this->setMinimumSize(400,200);

    QVBoxLayout* layout = new QVBoxLayout();

    LabeledTextField* l1 = new LabeledTextField("IP address");
    LabeledTextField* l2 = new LabeledTextField("User");
    LabeledTextField* l3 = new LabeledTextField("Password");

    layout->addWidget(l1);
    layout->addWidget(l2);
    layout->addWidget(l3);

    this->setLayout(layout);
}
