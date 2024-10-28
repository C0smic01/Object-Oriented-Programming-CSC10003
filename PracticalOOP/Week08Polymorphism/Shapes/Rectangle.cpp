#include "Rectangle.h"

Rectangle::Rectangle(double width, double height)
{
	Rectangle::_width = width;
	Rectangle::_height = height;
}

double Rectangle::Area()
{
	double area = Rectangle::_width * Rectangle::_height;
	return area;
}

double Rectangle::Perimeter()
{
	double perimeter = 2 * (Rectangle::_width + Rectangle::_height);
	return perimeter;
}

std::string Rectangle::toString()
{
	std::string output = std::format("Rectangle w={}, h={}", Rectangle::_width, Rectangle::_height);
	return output;
}