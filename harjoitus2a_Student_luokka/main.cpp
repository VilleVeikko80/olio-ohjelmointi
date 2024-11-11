#include <iostream>
#include "student.h"
#include <memory>

using namespace std;

int main()
{

    // Luodaan Student-olio shared_pointterilla
    //shared_ptr<Student> studentPtr = make_shared<Student>();

    // Luodaan Student-olio unique_poinnterilla
    unique_ptr<Student> studentPtr = make_unique<Student>();

    studentPtr -> setName("Ville K");
    studentPtr -> setStudentNumber(69);
    studentPtr -> setAverage(4.3);

    cout << studentPtr ->getName() << endl;
    cout << studentPtr -> getStudentNumber() << endl;
    cout << studentPtr -> getAverage() << endl;


    return 0;
}
