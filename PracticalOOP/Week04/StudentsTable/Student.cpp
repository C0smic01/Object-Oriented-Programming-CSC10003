#include "Student.h"

Student::Student()
{
	_id = "";
	_fullname = "";
	_email = "";
}

Student::Student(std::string id, std::string fullname, std::string email)
{
	_id = id;
	_fullname = fullname;
	_email = email;
}