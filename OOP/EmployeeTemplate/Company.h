#pragma once
#include "Employee.h"
#include "Manager.h"
#include <iostream>
#include <vector>

class Company
{
private:
    std::vector<Employee*> _list;
public:
    double getTotalSalary();
    void addEmployee(Employee* employee);
    void printAll();
    std::vector<Employee*> getList();
    int countSuperManager();
    ~Company();
};