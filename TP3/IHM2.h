//
// Created by win on 18/03/2020.
//

#ifndef TP3QT_IHM2_H
#define TP3QT_IHM2_H


#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include "IHM1.h"

class IHM2 : public QWidget
{
    Q_OBJECT

private:
    QPushButton* button;
    QTextEdit* text;
    int click=0;
    IHM1* win;
public:
    QPushButton *getButton() const;
    IHM2();
    void action1();
    void action2();
    void action3();
    void action4();

public slots:
    void slotAction2();
    void slotAction3();


};


#endif //TP3QT_IHM2_H
