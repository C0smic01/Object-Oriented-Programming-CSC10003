#include "Circle.h"
#define PI 3.14

Circle::Circle(double radius)
{
	Circle::_radius = radius;
}

double Circle::Area()
{
	double area = PI * Circle::_radius * Circle::_radius;
	return area;
}

double Circle::Perimeter()
{
	double perimeter = 2 * PI * Circle::_radius;
	return perimeter;
}

std::string Circle::toString()
{
	std::string output = std::format("Circle r={}", Circle::_radius);
	return output;
}