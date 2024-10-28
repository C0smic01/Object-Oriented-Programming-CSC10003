#include "Programmer.h"

Programmer::Programmer() : Employee()
{
    Programmer::_overTime = 0;
}

Programmer::Programmer(std::string id, std::string name, std::string dateOfBirth, std::string address, double baseSalary, double salaryCoefficient, std::string startDate, double overTime) : Employee(id, name, dateOfBirth, address, baseSalary, salaryCoefficient, startDate)
{
    Programmer::_overTime = overTime;
}

double Programmer::getSalary()
{
    double salary = Employee::_baseSalary * Employee::_salaryCoefficient + Programmer::_overTime;
    return salary;
}

void Programmer::printInfo()
{
    std::cout << "ID: " << Employee::_id << std::endl;
    std::cout << "Name: " << Employee::_name << std::endl;
    std::cout << "Date of birth: " << Employee::_dateOfBirth << std::endl;
    std::cout << "Address: " << Employee::_address << std::endl;
    std::cout << "Base salary: " << Employee::_baseSalary << std::endl;
    std::cout << "Salary coefficient: " << Employee::_salaryCoefficient << std::endl;
    std::cout << "Start date: " << Employee::_startDate << std::endl;
    std::cout << "Over time: " << Programmer::_overTime << std::endl;
    std::cout << "Salary: " << Programmer::getSalary() << std::endl;
    std::cout << std::endl;
}