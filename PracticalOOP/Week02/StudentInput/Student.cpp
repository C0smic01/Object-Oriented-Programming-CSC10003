#include "Student.h"

Student::Student(string ID, string fullName, string address, string email, int day, int month, int year):_dateOfBirth(day, month, year)
{
	Student::_ID = ID;
	Student::_fullName = fullName;
	Student::_address = address;
	Student::_email = email;
}

string Student::getID()
{
	return _ID;
}

string Student::getFullName()
{
	return _fullName;
}

string Student::getAddress()
{
	return _address;
}

string Student::getEmail()
{
	return _email;
}

Date Student::getDateOfBirth()
{
	return _dateOfBirth;
}