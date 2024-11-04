#include <iostream>
#include <iomanip>
#include "funktiot.h"

using namespace std;

int main()
{
    int a, b;



    cout << "Anna ensimmainen kokonaisluku: ";
    cin >> a;

    cout << "Anna toinen kokonaisluku: ";
    cin >> b;

    // Nämä funktiot tulostavat tuloksen suoraan
    calcSum(a, b);
    calcDiv(a, b);

    // Nämä funktiot palauttavat tuloksen
    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);

    cout << "retSum() funktion laskema summa on: " <<summa <<endl;

    cout << fixed << setprecision(2);
    cout << "retDiv() funktion laskema osamaara on: " << osamaara << endl;



    return 0;
}
