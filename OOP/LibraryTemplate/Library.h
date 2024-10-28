#pragma once
#include "Book.h"
#include "Member.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Library 
{
    private:
        vector<Member*> members;
        vector<Book*> books;
    public:
        // Add book to library
        void addBook(Book* book);
        // Add member to library
        void addMember(Member* member);
        // Get list of members
        vector<Member*> getMembers();
        // Get list of books
        vector<Book*> getBooks();
        // 
        ~Library();
};