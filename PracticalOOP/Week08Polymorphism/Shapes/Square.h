#pragma once
#include <string>
#include <format>
#include "IShape.h"

class Square : public IShape
{
protected:
	double _a;
public:
	Square(double a);
	double Area() override;
	double Perimeter() override;
	std::string toString() override;
};