#pragma once
#include "Employee.h"

class Junior : public Employee
{
private:
	int _discount = 75;
public:
	Junior(std::string name, std::string course, double fullCost);
	int getDiscount() override;
	double Price() override;
	std::string toString() override;
};