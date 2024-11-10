#include "car.h"

// Rakentajan määrittely
Car::Car() {

    // Alustetaan oletusarvot tarvittaessa

}

// Setterit

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}
void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

// Getterit

string Car::getBrand() const
{
    return brand;
}

string Car::getModel() const
{
    return model;
}

int Car::getYearModel() const
{
    return yearModel;
}

// printData - metodin määrittely
void Car::printData() const {
    cout << "Auton Merkki: " << getBrand() << endl;
    cout << "Auton malli: " << getModel() << endl;
    cout << "Valmistusvuosi: " << getYearModel() << endl;
 }


