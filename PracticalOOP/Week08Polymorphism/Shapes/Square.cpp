#include "Square.h"

Square::Square(double a)
{
	Square::_a = a;
}

double Square::Area()
{
	double area = Square::_a * Square::_a;
	return area;
}

double Square::Perimeter()
{
	double perimeter = 4 * Square::_a;
	return perimeter;
}

std::string Square::toString()
{
	std::string output = std::format("Square a={}", Square::_a);
	return output;
}