#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <vector>
#include <memory>

using namespace std;



class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    Car(); // Oletusrakentaja
    Car(string, string, int); // Parametrillinen rakentaja

    // setterit
    void setBrand(const string &newBrand);
    void setModel(const string &newModel);
    void setYearModel(int newYearModel);

    // getterit
    string getBrand() const;
    string getModel() const;
    int getYearModel() const;


    // Tulostus metodit
    void printData() const;




};






#endif // CAR_H
