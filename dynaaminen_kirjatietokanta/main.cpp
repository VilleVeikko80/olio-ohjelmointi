#include <iostream>
#include "library.h"

using namespace std;

int main() {

    Library myLibrary;

    // Listään kirjoja
    myLibrary.addBook("1984", "George Orwell", 328);
    myLibrary.addBook("To kill a Mockingbird", "Harper Lee", 281);
    myLibrary.addBook("The Great Gatsby", "F. Scott Fitzgerald", 180);

    cout << "Kaikki kirjaston kirjat: " << endl;
    myLibrary.printAllbooks();

    // Päivitä kirjan tiedot
    Book bookToUpdate("Placeholder", "Unknown" , 0); // Esimerkki viittaukseen
    myLibrary.updateBook(bookToUpdate, "Brave new world", "Aldous Huxley", 311);
    cout << "Updated book details: " << endl;
    bookToUpdate.printDetails();






    return 0;
}
