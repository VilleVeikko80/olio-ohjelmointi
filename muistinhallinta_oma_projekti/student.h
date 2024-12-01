#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int grade;

public:

    // Parametrillinen rakentaja
    Student(const string &name, int grade);

    // Getterit
    string getName() const;
    int getGrade() const;

    // Setterit
    void setName(const string &name);
    void setGrade(int grade);

    // Tulostusmetodi
    void printResult() const;
};

#endif // STUDENT_H
