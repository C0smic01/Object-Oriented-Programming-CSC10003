#pragma once
#include <string>
#include <format>
#include "IShape.h"

class Circle : public IShape
{
protected:
	double _radius;
public:
	Circle(double radius);
	double Area() override;
	double Perimeter() override;
	std::string toString() override;
};