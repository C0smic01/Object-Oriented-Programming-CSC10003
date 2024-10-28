#include "Tester.h"

Tester::Tester() : Employee()
{
    Tester::_numberOfBugs = 0;
}

Tester::Tester(std::string id, std::string name, std::string dateOfBirth, std::string address, double baseSalary, double salaryCoefficient, std::string startDate, int numberOfBugs) : Employee(id, name, dateOfBirth, address, baseSalary, salaryCoefficient, startDate)
{
    Tester::_numberOfBugs = numberOfBugs;
}

double Tester::getSalary()
{
    double salary = Employee::_baseSalary * Employee::_salaryCoefficient + Tester::_numberOfBugs * 200000;
    return salary;
}

void Tester::printInfo()
{
    std::cout << "ID: " << Employee::_id << std::endl;
    std::cout << "Name: " << Employee::_name << std::endl;
    std::cout << "Date of birth: " << Employee::_dateOfBirth << std::endl;
    std::cout << "Address: " << Employee::_address << std::endl;
    std::cout << "Base salary: " << Employee::_baseSalary << std::endl;
    std::cout << "Salary coefficient: " << Employee::_salaryCoefficient << std::endl;
    std::cout << "Start date: " << Employee::_startDate << std::endl;
    std::cout << "Number of bugs: " << Tester::_numberOfBugs << std::endl;
    std::cout << "Salary: " << Tester::getSalary() << std::endl;
    std::cout << std::endl;
}