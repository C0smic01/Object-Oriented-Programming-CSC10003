#include "Junior.h"

Junior::Junior(std::string name, std::string course, double fullCost) : Employee(name, course, fullCost) {}

int Junior::getDiscount()
{
	return Junior::_discount;
}

double Junior::Price()
{
	return Junior::_fullCost * Junior::_discount / 100;
}

std::string Junior::toString()
{
	std::string output = "Junior";
	return output;
}