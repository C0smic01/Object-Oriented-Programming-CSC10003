#include "Employee.h"

Employee::Employee()
{
    Employee::_id = "";
    Employee::_name = "";
    Employee::_dateOfBirth = "";
    Employee::_address = "";
    Employee::_baseSalary = 0;
    Employee::_salaryCoefficient = 0;
    Employee::_startDate = "";
}

Employee::Employee(std::string id, std::string name, std::string dateOfBirth, std::string address, double baseSalary, double salaryCoefficient, std::string startDate)
{
    Employee::_id = id;
    Employee::_name = name;
    Employee::_dateOfBirth = dateOfBirth;
    Employee::_address = address;
    Employee::_baseSalary = baseSalary;
    Employee::_salaryCoefficient = salaryCoefficient;
    Employee::_startDate = startDate;
}

std::string Employee::getId()
{
    return Employee::_id;
}

std::string Employee::getName()
{
    return Employee::_name;
}