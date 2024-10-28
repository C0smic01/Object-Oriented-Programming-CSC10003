#pragma once
#include <string>
#include <format>
#include "IShape.h"

class Rectangle : public IShape
{
protected:
	double _width;
	double _height;
public:
	Rectangle(double width, double height);
	double Area() override;
	double Perimeter() override;
	std::string toString() override;
};