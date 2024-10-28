#pragma once
#include "Employee.h"

class Programmer : public Employee
{
private:
    double _overTime;
public:
    Programmer();
    Programmer(std::string id, std::string name, std::string dateOfBirth, std::string address, double baseSalary, double salaryCoefficient, std::string startDate, double overTime);
    double getSalary() override;
    void printInfo() override;
};