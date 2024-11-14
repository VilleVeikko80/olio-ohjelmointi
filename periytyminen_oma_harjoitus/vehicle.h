#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
protected:
    // Ovat suoraan käytettävisä johdetuissa luokissa, mutta eivät luokan ulkopuolella
    std::string name;
    int speed;

public:
    Vehicle(const std::string &name, int speed);   // Parametrillinen rakentaja

    // Virtuaalinen funktio, joka voidaan ylikirjoittaa. Tämä tarkoittaa, että aliluokat voivat määritellä
    // oman versionsa tästä funktiosta.
    virtual void printInfo() const;

};

#endif // VEHICLE_H
