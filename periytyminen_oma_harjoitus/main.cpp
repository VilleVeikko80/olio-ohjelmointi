#include <iostream>
#include <vector>
#include <memory> // smart-pointers lirjasto
#include "vehicle.h"
#include "car.h"
#include "bicycle.h"


using namespace std;

int main() {



    // ***** Smart pointers *****

    // Luodaan vector of unique_ptr<Vehicle>, johon tallennetaan Car- ja Bicycle-olioita
    vector<unique_ptr<Vehicle>> vehicles;

    // Luodaan olioita dynaamisesti kekoon ja lisätään ne vektoriin
    vehicles.push_back(make_unique<Car>("Toyota", 120, 4));
    vehicles.push_back(make_unique<Bicycle>("Mountain Bike", 30, 21));

    // Käytetään polymorfismia tulostamaan kaikkien olioiden tiedot
    for(const auto &v : vehicles) {
        v->printInfo();
        cout << endl;
    }

    // Ei tarvetta manuaaliseen delete-kutsuun, koska unique_ptr vapauttaa muistin automaattisesti


    // Luodaan Vehicle-osoittimia, jotka osoittavat Car- ja Bicycle-olioihin
    // vector<Vehicle*>vehicles;
    // Luodaan olioita dynaamisesti kekoon
    //vehicles.push_back(new Car("Toyota", 120, 4));
    //vehicles.push_back(new Bicycle("Mountain Bike", 30, 21));

     //KÄytetään polymorfismia tulostamaan kaikkien olioiden tiedot
    //for (Vehicle* v : vehicles) {
     //   v->printInfo();
     //   cout << endl;
    //}

    // Vapautetaan muisti
    //for (Vehicle* v : vehicles) {
    //    delete v;
    //}

   // Luodaan Car- ja Bicycle-oliot
   // Car myCar("KIA", 140, 5);
   //Bicycle myBike("Maastopyora", 30, 21);

    // Tulostetaan auton tiedot
    //myCar.printInfo(); // Kutsuu Car-luokan printInfo-funktiota

    // Tulostetaan polkupyörän tiedot
    //cout <<"\nBicycle Info:" << endl;
    //myBike.printInfo();

    return 0;
}
