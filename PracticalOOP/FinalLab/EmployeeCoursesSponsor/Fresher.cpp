#include "Fresher.h"

Fresher::Fresher(std::string name, std::string course, double fullCost) : Employee(name, course, fullCost) {}

int Fresher::getDiscount()
{
	return Fresher::_discount;
}

double Fresher::Price()
{
	return Fresher::_fullCost * Fresher::_discount / 100;
}

std::string Fresher::toString()
{
	std::string output = "Fresher";
	return output;
}