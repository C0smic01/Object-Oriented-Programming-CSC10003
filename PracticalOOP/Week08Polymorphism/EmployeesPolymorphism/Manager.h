#pragma once
#include "Employee.h"
#include <format>

class Manager : public Employee
{
private:
	int _employeeCount;
	int _baseSalary;
	int _paymentPerEmployee;
public:
	Manager(int employeeCount, int baseSalary, int paymentPerEmployee);
	int salary() override;
	std::string toString() override;
};