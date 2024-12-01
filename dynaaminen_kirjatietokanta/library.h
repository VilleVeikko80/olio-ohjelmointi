#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>
#include <memory> // Älykkäitä osoittimia varten

using namespace std;

class Library {
private:
    vector<Book*> bookList; // Dynaaminen lista kirjoista (osoittimien avulla), jotka tallennetaan kekomuistiin

public:
    Library();                         // Oletusrakentaja
    ~Library();                      // Destruktori (vapauttaa muistin)


    // Metodit
    void addBook(const string &title, const string &author, int pages);
    void updateBook(Book &book, const string &title, const string &author, int pages);
    void printAllbooks() const;


};

#endif // LIBRARY_H
