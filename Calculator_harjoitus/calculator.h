#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include "basicalu.h"


class Calculator : public BasicALU {
private:
    double op1;
    double op2;
    double result;
    char operation;

public:
    // Oletusrakentaja
    Calculator();

    void inputOperands();
    void calculateResult();
    void showResult();
};

#endif // CALCULATOR_H
