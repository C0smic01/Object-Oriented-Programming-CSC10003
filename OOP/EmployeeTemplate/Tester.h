#pragma once
#include "Employee.h"

class Tester : public Employee
{
private:
    int _numberOfBugs;
public:
    Tester();
    Tester(std::string id, std::string name, std::string dateOfBirth, std::string address, double baseSalary, double salaryCoefficient, std::string startDate, int numberOfBugs);
    double getSalary() override;
    void printInfo() override;
};