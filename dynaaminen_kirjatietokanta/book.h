#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;

public:

    // Parametrillinen rakentaja
    Book(const string &title, const string &author, int pages);

    // Getterit
    string getTitle() const;
    string getAuthor() const;
    int getPages() const;

    // Setterit
    void setTitle(const string &title);
    void setAuthor(const string &author);
    void setPages(int pages);

    // Tulostusmetodi
    void printDetails() const;
};

#endif // BOOK_H
