#include <iostream>
#include "chef.h"
#include "italianchef.h"
#include <string>

using namespace std;

// Rakentaja, joka kutsuu Chef-luokan rakentajaa
ItalianChef::ItalianChef(const std::string &name) : Chef(name) {
    std::cout << "ItalianChef " << name << " konstruktori " << std::endl;
}

// Destruktori
ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef " << name << " destruktori" << std::endl;
}

// metodit

std::string ItalianChef::getName() const {
    return name;
}

void ItalianChef::makePasta() const {
    std::cout << "Italian Chef " << name << "makes pasta " << std::endl;
    std::cout << "name of the Italian Cheff is " <<  std::endl;
}
