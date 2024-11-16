#include <iostream>
#include <iomanip>
#include "calculator.h"
#include "basicalu.h"


int main()
{

    Calculator calc;

    calc.inputOperands(); // Käyttäjä syöttää luvut ja operaation
    calc.calculateResult(); // Lasketaan tulos
    calc.showResult(); // Tulos

    return 0;
}
