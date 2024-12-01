#include "student.h"


// Parametrillinen rakentaja
Student::Student(const string &name, int grade) : name(name), grade(grade) {}



// Getterit
string Student::getName() const
{
    return name;
}

int Student::getGrade() const
{
    return grade;
}


// Setterit
void Student::setName(const string &newName)
{
    name = newName;
}

void Student::setGrade(int newGrade)
{
    grade = newGrade;
}

// Tulostusmetodi
void Student::printResult() const {
    cout << "Nimi: " << name << " Arvosana: " << grade << endl;
}
