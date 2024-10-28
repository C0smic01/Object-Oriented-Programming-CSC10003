#pragma once
#include "Employee.h"

class Fresher : public Employee
{
private:
	int _discount = 50;
public:
	Fresher(std::string name, std::string course, double fullCost);
	int getDiscount() override;
	double Price() override;
	std::string toString() override;
};