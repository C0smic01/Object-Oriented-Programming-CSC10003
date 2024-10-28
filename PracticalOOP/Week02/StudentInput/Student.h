#pragma once
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string _ID, _fullName, _address, _email;
	Date _dateOfBirth;
public:
	Student(string ID, string fullName, string address, string email, int day, int month, int year);
	string getID();
	string getFullName();
	string getAddress();
	string getEmail();
	Date getDateOfBirth();
};