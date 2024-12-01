#include "classb.h"
#include "assosiationa.h"
#include "AggregationA.h"

#include <iostream>
#include <string>


using namespace std;

int main()
{

    int a = 5;
    int b = 10;



    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on " << b << " ja osoite on: " << &b << endl;
    cout << endl;

    // Alustetaan myPointer osoittamaan muuttujaan a
    int *myPointer = &a;

    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;

    // Vaihdetaan myPointer osoittamaan muuttujaan b
    myPointer = &b;

    cout << "Pointterin  osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;

    // Luodaan referenssi refA viittaamaan muuttujaan a
    int &refA  = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;
    cout << endl;
    cout << "**************************************" << endl;
    cout << endl;

    // Referenssiä (refA) ei voi muuttaa viittaamaan toiseen muuttujaan sen jälkeen, kun
    // se on sidottu alkuperäiseen muuttujaan.

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;
    cout << endl;

    cout<<"Aggregaatio esimerkki:"<<endl;

    ClassB &refB=objB;
    AggregationA objAggr(refB);

    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;








    return 0;
}
