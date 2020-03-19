//
// Created by win on 18/03/2020.
//

#ifndef TP2QT_LABELEDTEXTFIELD_H
#define TP2QT_LABELEDTEXTFIELD_H

#include <QtWidgets>


class LabeledTextField : public QWidget
{
private:
    QLabel* label;
    QTextEdit* text;
public:
    LabeledTextField(QString name);
};




#endif //TP2QT_LABELEDTEXTFIELD_H
