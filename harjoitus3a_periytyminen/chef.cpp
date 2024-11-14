#include <iostream>
#include "chef.h"

using namespace std;


// Rakentaja
Chef::Chef(const std::string &name) : name(name) {
    std::cout << "Chef " << name <<  " konstruktori" << std::endl;
}

// Destruktori
Chef::~Chef() {
    std::cout << "Chef " << name << " destruktori"<< std::endl;
}



// metodit
void Chef::makeSalad() const {
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void Chef::makeSoup() const {
    std::cout << "Chef "<< name <<" makes soup" << std::endl;
}
