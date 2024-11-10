#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    // Luodaan Car-olio pinomuistiin
    Car car;

    // Asetetaan tiedot setterien avulla
    car.setBrand("KIA");
    car.setModel("Ceed");
    car.setYearModel(2023);

    //Tulostetaan
    car.printData();

    return 0;
}
