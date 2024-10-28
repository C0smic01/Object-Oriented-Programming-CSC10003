#pragma once
#include "Employee.h"
#include "Company.h"
#include <vector>

class Manager : public Employee
{
private:
    std::vector<Employee*> _subordinates;
public:
    Manager();
    Manager(std::string id, std::string name, std::string dateOfBirth, std::string address, double baseSalary, double salaryCoefficient, std::string startDate, std::vector<Employee*> list);
    double getSalary() override;
    void printInfo() override;
    std::vector<Employee*> getSubordinates();
};