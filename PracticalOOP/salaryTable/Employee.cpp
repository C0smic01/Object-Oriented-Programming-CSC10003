#include "Employee.h"

Employee::Employee(std::string name, int wordDays, int baseSalary)
{
    this->_name = name;
    this->_wordDays = wordDays;
    this->_baseSalary = baseSalary;
}

std::string Employee::getName()
{
    return this->_name;
}

int Employee::getSalary()
{
    return this->_wordDays * this->_baseSalary;
}