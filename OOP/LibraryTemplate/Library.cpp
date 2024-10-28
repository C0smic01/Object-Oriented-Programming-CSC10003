#include "Library.h"

void Library::addBook(Book* book)
{
    books.push_back(book);
}

void Library::addMember(Member* member)
{
    members.push_back(member);
}

vector<Member*> Library::getMembers()
{
    return members;
}

vector<Book*> Library::getBooks()
{
    return books;
}

Library::~Library()
{
    for (int i = 0; i < Library::books.size(); i++)
    {
        delete Library::books[i];
    }
    for (int i = 0; i < Library::members.size(); i++)
    {
        delete Library::members[i];
    }
}