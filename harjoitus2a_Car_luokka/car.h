#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    // Rakentaja, joka alustaa car ilman arvoja
    Car();

    // Setterit
    void setBrand(const string &newBrand);
    void setModel(const string &newModel);
    void setYearModel(int newYearModel);

    // Getterit
    string getBrand() const;
    string getModel() const;
    int getYearModel() const;

    //Tulostus
    void printData() const;

};

#endif // CAR_H
