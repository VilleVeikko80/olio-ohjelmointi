#include <iostream>
#include <string>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    // Luodaan Chef ja ItalianChef-oliot pinomuistiin
    Chef chef("Gordon Ramsey ");
    ItalianChef italianchef("Anthony Bourdain ");

    chef.makeSalad();
    chef.makeSoup();

    italianchef.makeSalad();
    italianchef.makePasta();
    std::cout << italianchef.getName() << std::endl;






    return 0;
}
