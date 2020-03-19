#include "MainWindow.h"
#include <QApplication>
#include <QPushButton>
#include "ConfigurationDialog.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    SQLClientWindow window;

    ConfigurationDialog dialog;


    window.show();
    dialog.show();
    return app.exec();
}