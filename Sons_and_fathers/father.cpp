#include "father.h"

Father::Father() {
    Fathername = "...";
}

// Setteri
void Father::setFatherName(string fatherName) {
    Fathername = fatherName;
}

// Getteri
string Father::getFatherName() {
    return Fathername;
}
