#include "IHM1.h"
#include "IHM2.h"
#include <QApplication>
#include <QPushButton>


int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    IHM2 window;



    window.show();
   // dialog.show();
    return app.exec();
}