#include "library.h"


// Oletusrakentaja
Library::Library() {}

// Destruktori
Library::~Library() {
    for (Book* book : bookList) {
        delete book;                        // Vapautetaan jokainen dynaamisesti varattu kirja
    }
    bookList.clear();                      // Tyhjennetään lista
}


// Lisätään uusi kirja
void Library::addBook(const string &title, const string &author, int pages) {
    Book* newBook = new Book(title, author, pages); // Luodaan kirja kekomuistiin
    bookList.push_back(newBook); // Lisätään kirja osoitin listaan
}

// Päivitä kirjan tiedot viittauksen avulla
void Library::updateBook(Book &book, const string &title, const string &author, int pages) {
    book.setTitle(title);
    book.setAuthor(author);
    book.setPages(pages);
}

// Tulosta kaikki kirjat
void Library::printAllbooks() const {
    for (const Book* book : bookList) {
        book->printDetails(); // Kutsutaan jokaisen kirjan tulostusmetodia
    }
}
