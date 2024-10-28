#include "Book.h"

Book::Book(string title, string author, string isbn)
{
    Book::title = title;
    Book::author = author;
    Book::ISBN = isbn;
    Book::isRented = false;
}

string Book::getTitle()
{
    return Book::title;
}

string Book::getAuthor()
{
    return Book::author;
}

string Book::getISBN()
{
    return Book::ISBN;
}

bool Book::getIsRented()
{
    return Book::isRented;
}

void Book::rentBook()
{
    Book::isRented = true;
}

void Book::returnBook()
{
    Book::isRented = false;
}