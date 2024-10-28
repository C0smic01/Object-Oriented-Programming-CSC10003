#include "Library.h"
#include "Book.h"
#include "Member.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    Library library;
    bool endFlag = false;
    while(!endFlag)
    {
        int choice = 0;
        cout << endl;
        cout << "1. Add book" << endl;
        cout << "2. Add member" << endl;
        cout << "3. Get member list" << endl;
        cout << "4. Get book list" << endl;
        cout << "5. Rent book" << endl;
        cout << "6. Return book" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();
        switch(choice)
        {
            case 1:
            {
                string title = "", 
                    author = "", 
                    ISBN = "";

                cout << "Enter title: ";
                getline(cin, title);
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter ISBN: ";
                getline(cin, ISBN);

                Book* book = new Book(title, author, ISBN);
                library.addBook(book);
                break;
            }
            case 2:
            {
                string name = "", 
                    id = "";
                cout << "Enter name: ";
                getline(cin, name);
                cout << "Enter id: ";
                getline(cin, id);

                Member* member = new Member(name, id);
                library.addMember(member);
                break;
            }
            case 3:
            {
                vector<Member*> members = library.getMembers();
                // Loop through the members vector and print the name, ID, and rented books of each member
                for(int i = 0; i < members.size(); i++)
                {
                    cout << "Name: " << members[i]->getName() << endl;
                    cout << "ID: " << members[i]->getID() << endl;
                    cout << "Rented books: " << endl;
                    vector<Book*> rentedBooks = members[i]->getRentedBooks();
                    for(int j = 0; j < rentedBooks.size(); j++)
                    {
                        cout << "Title: " << rentedBooks[j]->getTitle() << " ";
                        cout << "Author: " << rentedBooks[j]->getAuthor() << " ";
                        cout << "ISBN: " << rentedBooks[j]->getISBN() << endl;
                    }
                }
                break;
            }
            case 4:
            {
                vector<Book*> books = library.getBooks();
                // Loop through the books vector and print the title, author, and ISBN of each book
                for (int i = 0; i < books.size(); i++)
                {
                    cout << "Title: " << books[i]->getTitle() << endl;
                    cout << "Author: " << books[i]->getAuthor() << endl;
                    cout << "ISBN: " << books[i]->getISBN() << endl;
                    cout << "Rental status: " << books[i]->getIsRented() << endl;
                }
                break;
            }
            case 5:
            {
                bool flag = false;
                string title = "";
                cout << "Enter book's title: ";
                getline(cin, title);
                string name = "";
                cout << "Enter member's name: ";
                getline(cin, name);
                vector<Book*> books = library.getBooks();
                vector<Member*> members = library.getMembers();
                // Loop through the books vector and check if the book is available
                for (int i = 0; i < books.size(); i++)
                {
                    if (books[i]->getTitle() == title && books[i]->getIsRented() == false)
                    {
                        // Loop through the members vector and rent the book to the member
                        for (int j = 0; j < members.size(); j++)
                        {
                            if (members[j]->getName() == name)
                            {
                                members[j]->rentBook(books[i]);
                                flag = true;
                                break;
                            }
                            else if (j == members.size() - 1)
                            {
                                cout << "Member not found" << endl;
                            }
                        }
                        break;
                    }
                    else if (books[i]->getTitle() == title && books[i]->getIsRented() == true)
                    {
                        cout << "Book is already rented" << endl;
                        break;
                    }
                    else if (i == books.size() - 1)
                    {
                        cout << "Book not found" << endl;
                    }
                }
                if (!flag)
                {
                    cout << "Rent failed" << endl;
                }
                else cout << "Rent successful" << endl;
                break;
            }
            case 6:
            {
                bool flag = false;
                string title = "";
                cout << "Enter book's title: ";
                getline(cin, title);
                string name = "";
                cout << "Enter member's name: ";
                getline(cin, name);
                vector<Member*> members = library.getMembers();
                
                for (int i = 0; i < members.size(); i++)
                {
                    if (members[i]->getName() == name)
                    {
                        vector<Book*> rentedBooks = members[i]->getRentedBooks();
                        for (int j = 0; j < rentedBooks.size(); j++)
                        {
                            if (rentedBooks[j]->getTitle() == title)
                            {
                                members[i]->returnBook(rentedBooks[j]);
                                flag = true;
                                break;
                            }
                            else if (j == rentedBooks.size() - 1)
                            {
                                cout << "Book not found" << endl;
                            }
                        }
                    }
                    else if (i == members.size() - 1)
                    {
                        cout << "Member not found" << endl;
                        break;
                    }
                }
                
                if (!flag)
                {
                    cout << "Return failed" << endl;
                }
                else cout << "Return successful" << endl;
                break;
            }
            case 7:
            {
                endFlag = true;
                break;
            }
            default:
            {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}