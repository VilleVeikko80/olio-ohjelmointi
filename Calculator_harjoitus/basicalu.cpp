#include "basicalu.h"
#include "calculator.h"
#include <iostream>
#include <string>


BasicALU::BasicALU() {}

double BasicALU::sum(double op1, double op2) {
    return op1 + op2;
}

double BasicALU::sub(double op1, double op2) {
    return op1 - op2;
}

double BasicALU::mul(double op1, double op2) {
    return op1 - op2;
}

double BasicALU::divide(double op1, double op2) {
    if ( op2 == 0) {
        std::cerr << "VIRHE: ei voi jakaa nollalla" << std::endl;
    }
    return op1 / op2;
}
