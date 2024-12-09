#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass esimerkki;

    esimerkki.startToWait();

    return a.exec();
}
