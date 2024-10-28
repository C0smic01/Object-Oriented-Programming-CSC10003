#include "Member.h"

Member::Member(string name, string id)
{
    Member::name = name;
    Member::id = id;
}

string Member::getName()
{
    return Member::name;
}

string Member::getID()
{
    return Member::id;
}

vector<Book*> Member::getRentedBooks()
{
    return Member::rentedBooks;
}

void Member::rentBook(Book* book)
{
    Member::rentedBooks.push_back(book);
    book->rentBook();
}

void Member::returnBook(Book* book)
{
    for (int i = 0; i < rentedBooks.size(); i++)
    {
        if (rentedBooks[i]->getISBN() == book->getISBN())
        {
            rentedBooks.erase(rentedBooks.begin() + i);
            book->returnBook();
            break;
        }
    }
}

