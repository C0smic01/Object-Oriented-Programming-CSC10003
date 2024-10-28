#pragma once
#include <string>

class Employee 
{
private:
    std::string _name;
    int _wordDays, _baseSalary;
public:
    Employee(std::string name, int wordDays, int baseSalary);
    std::string getName();
    int getSalary();
};