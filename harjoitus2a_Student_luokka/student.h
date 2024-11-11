#ifndef STUDENT_H
#define STUDENT_H
#include <memory>
#include <string>

using namespace std;

class Student {
private:
    string  name;
    int studentNumber;
    double average;

public:
    Student();

    // Setterit
     void setName(const string &newName);
     void setStudentNumber(int newStudentNumber);
     void setAverage(double newAverage);

     // Getterit
    string getName() const;
    int getStudentNumber() const;
    double getAverage() const;

};


#endif // STUDENT_H
