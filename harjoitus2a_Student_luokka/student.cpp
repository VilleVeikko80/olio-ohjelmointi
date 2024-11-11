#include <iostream>
#include "student.h"
#include <memory>

using namespace std;

// Rakentajan määrittely
Student::Student() {

    // Alustetaan muuttujat tarvittaessa

}


// setterit
void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}

void Student::setName(const string &newName)
{
    name = newName;
}

// getterit

int Student::getStudentNumber() const
{
    return studentNumber;
}


double Student::getAverage() const
{
    return average;
}


string Student::getName() const
{
    return name;
}


