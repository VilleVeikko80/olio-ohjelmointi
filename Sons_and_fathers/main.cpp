#include <iostream>
#include "son.h"

using namespace std;


int main()
{

    // Luodaan Son-olio
    Son son("Kari");

    // Tulostetaan Son-luokan tiedot
    cout << son.getName() << endl;
    cout << son.getFatherName() << endl;
    cout << son.getGrandName() << endl;





    return 0;
}
