#ifndef BASICALU_H
#define BASICALU_H
#include <iostream>


class BasicALU
{
public:
    // Oletusrakentaja
    BasicALU();

    // Laskutoimitukset
    double sum(double, double);
    double sub(double, double);
    double mul(double, double);
    double divide(double, double);
};

#endif // BASICALU_H
