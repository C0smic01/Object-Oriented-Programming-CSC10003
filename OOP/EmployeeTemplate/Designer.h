#pragma once
#include "Employee.h"

class Designer : public Employee
{
private:
    double _bonus;
public:
    Designer();
    Designer(std::string id, std::string name, std::string dateOfBirth, std::string address, double baseSalary, double salaryCoefficient, std::string startDate, double bonus);
    double getSalary() override;
    void printInfo() override;
};