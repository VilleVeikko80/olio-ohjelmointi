#include <iostream>
#include "son.h"


// Rakentaja (muodostaja)
Son::Son(const string &value) {
    name = value;
    setFatherName("Father of " + value); // Kutsutaan Father-luokan setteriä
    setGrandName("GrandFather of " + value); // Kutsutaan GrandFather-luokan setteriä
}

// Setteri
void Son::setName(string name) {
    name = name;
}

// Getteri
string Son::getName() {
    return name;

}







