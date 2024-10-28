#pragma once
#include "Rectangle.h"
#include <string>

class SolidRectangleConverter 
{
private:
	std::string fill;
public:
	SolidRectangleConverter(std::string fill);
    std::string convert(Rectangle info);
};