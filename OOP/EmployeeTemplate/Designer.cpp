#include "Designer.h"

Designer::Designer() : Employee()
{
    Designer::_bonus = 0;
}

Designer::Designer(std::string id, std::string name, std::string dateOfBirth, std::string address, double baseSalary, double salaryCoefficient, std::string startDate, double bonus) : Employee(id, name, dateOfBirth, address, baseSalary, salaryCoefficient, startDate)
{
    Designer::_bonus = bonus;
}

double Designer::getSalary()
{
    double salary = Employee::_baseSalary * Employee::_salaryCoefficient + Designer::_bonus;
    return salary;
}

void Designer::printInfo()
{
    std::cout << "Designer: " << Employee::_name << std::endl;
    std::cout << "ID: " << Employee::_id << std::endl;
    std::cout << "Date of birth: " << Employee::_dateOfBirth << std::endl;
    std::cout << "Address: " << Employee::_address << std::endl;
    std::cout << "Base salary: " << Employee::_baseSalary << std::endl;
    std::cout << "Salary coefficient: " << Employee::_salaryCoefficient << std::endl;
    std::cout << "Start date: " << Employee::_startDate << std::endl;
    std::cout << "Bonus: " << Designer::_bonus << std::endl;
    std::cout << "Salary: " << Designer::getSalary() << std::endl;
    std::cout << std::endl;
}