#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book 
{
    private:
        string title;
        string author;
        string ISBN;
        bool isRented;
    public:
        // Constructor
        Book(string title, string author, string ISBN);
        // Get title
        string getTitle();
        // Get author
        string getAuthor();
        // Get ISBN
        string getISBN();
        // Get rental status
        bool getIsRented();
        // Rent book
        void rentBook();
        // Return book
        void returnBook();
};