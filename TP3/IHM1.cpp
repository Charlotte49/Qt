//
// Created by win on 13/02/2020.
//

#include "IHM1.h"
#include <QVBoxLayout>

IHM1::IHM1()
{

    this->setWindowTitle("IHM");
    this->setMinimumSize(200,200);

    QWidget *mainWidget = new QWidget();

    QVBoxLayout *mainLayout=new QVBoxLayout();
    mainWidget->setLayout(mainLayout);

    bar=new QProgressBar();
    slider=new QSlider();
    slider->setOrientation(Qt::Horizontal);
    mainLayout->addWidget(bar);
    mainLayout->addWidget(slider);

    bar->setRange(0, 100);
    bar->setValue(0);
    bar->setGeometry(10, 10, 180, 30);

    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(10, 40, 180, 30);

    connect(slider, SIGNAL (valueChanged(int)), bar, SLOT (setValue(int)));
    this->setCentralWidget(mainWidget);

    
}
