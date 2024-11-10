#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
   // Luodaan Rectangle-olio kekomuistiin
    Rectangle* rect = new Rectangle();

    // Asetetaan leveys ja korkeus
    rect->setWidth(5.0);
    rect->setHeight(3.0);

    cout << "Suorakulmion pinta-ala: " << rect->getArea() << endl;
    cout << "Suorakulmion ymparysmitta: " << rect->getCircum() << endl;

    // Vapautetaan kekomuistista varattu olio
    delete rect;


    return 0;
}
