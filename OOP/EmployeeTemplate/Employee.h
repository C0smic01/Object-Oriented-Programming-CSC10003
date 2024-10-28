#pragma once
#include <string>
#include <iostream>
class Employee
{
protected:
    std::string _id;
    std::string _name;
    std::string _dateOfBirth;
    std::string _address;
    double _baseSalary;
    double _salaryCoefficient;
    std::string _startDate;
public:
    Employee();
    Employee(std::string id, std::string name, std::string dateOfBirth, std::string address, double baseSalary, double salaryCoefficient, std::string startDate);
    virtual double getSalary() = 0;
    virtual void printInfo() = 0;
    std::string getId();
    std::string getName();
};