#include "Employee.h"

Employee::Employee(std::string name, std::string course, double fullCost)
{
	Employee::_name = name;
	Employee::_course = course;
	Employee::_fullCost = fullCost;
}

std::string Employee::getName()
{
	return Employee::_name;
}

std::string Employee::getCourse()
{
	return Employee::_course;
}

double Employee::getFullCost()
{
	return Employee::_fullCost;
}