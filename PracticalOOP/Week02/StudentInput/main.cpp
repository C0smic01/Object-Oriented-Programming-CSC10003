#include "Student.h"

int main()
{
	string ID = "", fullName = "", address = "", email = "";
	int day = 0, month = 0, year = 0;
	cout << "Enter ID: ";
	getline(cin, ID);
	cout << "Enter Full Name: ";
	getline(cin, fullName);
	cout << "Enter Address: ";
	getline(cin, address);
	cout << "Enter Email: ";
	getline(cin, email);
	cout << "Enter Date Of Birth: ";
	cin >> day >> month >> year;
	Student student(ID, fullName, address, email, day, month, year);
	cout << "ID: " << student.getID() << endl;
	cout << "Full Name: " << student.getFullName() << endl;
	cout << "Address: " << student.getAddress() << endl;
	cout << "Email: " << student.getEmail() << endl;
	cout << "Date Of Birth: " << student.getDateOfBirth().getDay() << "-" << student.getDateOfBirth().getMonth() << "-" << student.getDateOfBirth().getYear() << endl;
	return 0;
}