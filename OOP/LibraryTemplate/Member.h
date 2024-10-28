#pragma once
#include "Book.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Member
{
    private:
        string name;
        string id;
        vector<Book*> rentedBooks;
    public:
       // Constructor
        Member(string name, string id);
        // Get name
        string getName();
        // Get ID
        string getID();
        // Get rented books
        vector<Book*> getRentedBooks();
        // Rent book
        void rentBook(Book* book);
        // Return book
        void returnBook(Book* book);
};