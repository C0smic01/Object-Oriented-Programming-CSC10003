#pragma once
#include "Object.h"
class IShape: public Object
{
public:
	virtual double Area() = 0;
	virtual double Perimeter() = 0;
};