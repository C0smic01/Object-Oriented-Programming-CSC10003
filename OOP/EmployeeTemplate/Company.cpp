#include "Company.h"

double Company::getTotalSalary()
{
    double total = 0;
    for (Employee* employee : _list)
    {
        total += employee->getSalary();
    }
    return total;
}

void Company::addEmployee(Employee* employee)
{
    _list.push_back(employee);
}

void Company::printAll()
{
    for (Employee* employee : _list)
    {
        employee->printInfo();
    }
}

std::vector<Employee*> Company::getList()
{
    return Company::_list;
}

int Company::countSuperManager()
{
    int count = 0;
    for (Employee* employee : _list)
    {
        // Check if the employee is a manager
        if (dynamic_cast<Manager*>(employee) != nullptr)
        {
            Manager* manager = dynamic_cast<Manager*>(employee);
            if (manager->getSubordinates().size() > 10)
            {
                count++;
            }
        }
    }
    return count;
}

Company::~Company()
{
    for (Employee* employee : _list)
    {
        delete employee;
    }
}