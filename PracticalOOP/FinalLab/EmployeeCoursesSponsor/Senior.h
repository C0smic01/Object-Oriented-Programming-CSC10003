#pragma once
#include "Employee.h"

class Senior : public Employee
{
private:
	int _discount = 100;
public:
	Senior(std::string name, std::string course, double fullCost);
	int getDiscount() override;
	double Price() override;
	std::string toString() override;
};