#include "grandfather.h"

GrandFather::GrandFather() {
    Grandname = "...";
}


// Setteri
void GrandFather::setGrandName(string grandname) {
    Grandname = grandname;
}


// Getteri
string GrandFather::getGrandName() {
    return Grandname;
}
