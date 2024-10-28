#include "Manager.h"

Manager::Manager() : Employee() {}

Manager::Manager(std::string id, std::string name, std::string dateOfBirth, std::string address, double baseSalary, double salaryCoefficient, std::string startDate, std::vector<Employee*> list) : Employee(id, name, dateOfBirth, address, baseSalary, salaryCoefficient, startDate) 
{
    for (int i = 0; i < list.size(); i++)
    {
        // Add user if the employee is a subordinate of the manager
        std::cout << "Is " << list[i]->getName() << " a subordinate of " << name << "?(y/n): ";
        char choice;
        std::cin >> choice;
        if (choice == 'y')
        {
            _subordinates.push_back(list[i]);
        }
    }
}

double Manager::getSalary()
{
    double salary = _baseSalary * _salaryCoefficient;
    return salary;
}

void Manager::printInfo()
{
    std::cout << "Manager: " << _name << std::endl;
    std::cout << "ID: " << _id << std::endl;
    std::cout << "Date of birth: " << _dateOfBirth << std::endl;
    std::cout << "Address: " << _address << std::endl;
    std::cout << "Base salary: " << _baseSalary << std::endl;
    std::cout << "Salary coefficient: " << _salaryCoefficient << std::endl;
    std::cout << "Start date: " << _startDate << std::endl;
    std::cout << "Salary: " << getSalary() << std::endl;
    std::cout << "Subordinates: " << std::endl;
    for (Employee* employee : _subordinates)
    {
        std::cout << "ID: " << employee->getId() << ", Name: " << employee->getName() << std::endl;
    }
    std::cout << std::endl;
}

std::vector<Employee*> Manager::getSubordinates()
{
    return Manager::_subordinates;
}