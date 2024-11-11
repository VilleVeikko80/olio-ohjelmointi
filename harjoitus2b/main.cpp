#include <iostream>
#include "car.h"
#include <vector>
#include <memory>

using namespace std;

int main()
{

    // Luodaan oliot pinomuistiin
    Car car;

    // Luodaan vektori lista
    vector<Car> carList;

    //Luodaan Car-luokan olioita
    Car Car0("KIA", "Ceed", 2023);
    Car Car1("Toyota", "Corolla", 1998);
    Car Car2("Ford", "Raptor", 2020);

    // Lisätään luodut oliot listaan
    carList.push_back(Car0);
    carList.push_back(Car1);
    carList.push_back(Car2);

    for(int i = 0; i < carList.size(); i++) {
        carList[i].printData();
    }

    return 0;
}
