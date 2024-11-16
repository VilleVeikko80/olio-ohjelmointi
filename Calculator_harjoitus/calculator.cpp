#include "calculator.h"
#include "basicalu.h"
#include <iostream>
#include <string>



Calculator::Calculator() {
    std::cout << "Laskin" << std::endl;
}

void Calculator::inputOperands() {
    std::cout << "Anna ensimmainen luku: " <<std::endl;
    std::cin >> op1;

    std::cout << "Anna laskutoimitus: + , - , * , tai /" << std::endl;
    std::cin >> operation;

    std::cout << "Anna toinen luku: " << std::endl;
    std::cin >> op2;
}

void Calculator::calculateResult() {
    switch (operation) {
    case '+':
        result = sum(op1, op2);
        break;
    case '-':
        result = sub(op1, op2);
        break;
    case '*':
        result = mul(op1, op2);
        break;
    case '/':
        result = divide(op1, op2);
        break;
    default:
        std:: cout << "Tuntematon laskutyyppi" << std::endl;
    }
}

void Calculator::showResult() {
    std::cout << op1 << operation << op2 << " = " << result << std::endl;
}

