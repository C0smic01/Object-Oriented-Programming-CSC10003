#include "Senior.h"

Senior::Senior(std::string name, std::string course, double fullCost) : Employee(name, course, fullCost) {}

int Senior::getDiscount()
{
	return Senior::_discount;
}

double Senior::Price()
{
	return Senior::_fullCost * Senior::_discount / 100;
}

std::string Senior::toString()
{
	std::string output = "Senior";
	return output;
}

