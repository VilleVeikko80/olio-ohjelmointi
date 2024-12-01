#include "student.h"
#include <iostream>

using namespace std;



int main()
{

    // Luodaan Student-olio dynaamisesti kekomuistiin (heap)
    // new varaa muistia dynaamisesti
    // osoitin studenPtr osoittaa dynaamiseen olioon

    Student* studentPtr = new Student("Ville", 85);

    // Tulostetaan opiskelijan tiedot
    studentPtr->printResult();

    // Päivitetäään tietoja viittauksen avulla
    // Osoittimen avulla -> päässään käsiksi olion metodeihin

    studentPtr->setName("Ville K");
    studentPtr->setGrade(90);

    cout << "Paivitetty lista:" << endl;
    studentPtr->printResult();




    // Vapautetaan varattu muisti
    delete studentPtr;

    // Luodaan dynaamisesti useampi opiskelija
    Student* studentArray = new Student[2] {
        Student("Jenna H", 70),
        Student("Saana", 96)
    };

    cout << "Opiskelijalista: " << endl;
    for(int i = 0; i < 2; i++) {
        studentArray[i].printResult();
    }

    // Vapautetaan taulukon muisti
    delete[] studentArray;


    return 0;
}
