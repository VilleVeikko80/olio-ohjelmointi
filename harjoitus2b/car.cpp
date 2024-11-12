#include <iostream>
#include "car.h"
#include <vector>
#include <memory>

using namespace std;

// Oletusrakentaja
Car::Car() : brand(""), model(""), yearModel(0) {}

// Parametrillinen rakentaja
Car::Car(string newBrand, string newModel, int newYearModel)
    : brand(newBrand), model(newModel), yearModel(newYearModel) {}



// Setterit
void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}



// Getterit

string Car::getModel() const
{
    return model;
}

int Car::getYearModel() const
{
    return yearModel;
}

string Car::getBrand() const
{
    return brand;
}

// Tulostus -metodit
void Car::printData() const {

        cout << "Merkki: " << getBrand() << endl;
        cout << "Malli: " << getModel() << endl;
        cout << "Vuosimalli: " << getYearModel() << endl;
        cout << "**********" << endl;
}




