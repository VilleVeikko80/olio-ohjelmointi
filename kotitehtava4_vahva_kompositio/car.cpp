#include "car.h"
#include <iostream>
#include <string>

using namespace std;

// Oletusrakentaja
Car::Car() : brand("undefined"), model("undefined") {}

// Parametrillinen rakentaja
Car::Car(const Engine &engine, const Wheel &wheel1, const Wheel &wheel2, const Wheel &wheel3, const Wheel &wheel4, const string &model, const string &brand)
    : engine(engine), wheel1(wheel1), wheel2(wheel2), wheel3(wheel3), wheel4(wheel4), model(model), brand(brand) {}


void Car::setEngine()
{

    engine.setHorsepower(150);
    engine.setDisplacement(2.0);

}

void Car::setWheels()
{

    wheel1.setSize(17);
    wheel1.setType("Kesarengas");
    wheel2.setSize(17);
    wheel2.setType("Kesarengas");
    wheel3.setSize(17);
    wheel3.setType("Kesarengas");
    wheel4.setSize(17);
    wheel4.setType("Kesarengas");

}



void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}


string Car::getBrand() const
{
    return brand;
}

string Car::getModel() const
{
    return model;
}

void Car::printDetails() const
{

    cout << "Auto: " << model << " " << brand << endl;
    cout << "Moottori: " << engine.getHorsepower() << " hp, " << engine.getDisplacement() << " L" << endl;
    cout << "Rengas 1: " << wheel1.getSize() << " Tuumaa, " << wheel1.getType() << endl;
    cout << "Rengas 2: " << wheel1.getSize() << " Tuumaa, " << wheel1.getType() << endl;
    cout << "Rengas 3: " << wheel1.getSize() << " Tuumaa, " << wheel1.getType() << endl;
    cout << "Rengas 4: " << wheel1.getSize() << " Tuumaa, " << wheel1.getType() << endl;


}












