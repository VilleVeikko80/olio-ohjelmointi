#include "book.h"


// Parametrillinen rakentaja
Book::Book(const string &title, const string &author, int pages)
    : title(title), author(author), pages(pages) {}


// Getterit
string Book::getTitle() const
{
    return title;
}

string Book::getAuthor() const
{
    return author;
}

int Book::getPages() const
{
    return pages;

}


// Setterit

void Book::setTitle(const string &newTitle)
{
    title = newTitle;
}

void Book::setAuthor(const string &newAuthor)
{
    author = newAuthor;
}

void Book::setPages(int newPages)
{
    pages = newPages;
}

// Tulostusmetodi
void Book::printDetails() const {
    cout << "title: " << title << ", Author: " << author << ", Pages: " << pages << endl;
}








