#pragma once
#include "Rectangle.h"
#include <string>

class HollowRectangleConverter 
{
private:
	std::string fill;
public:
	HollowRectangleConverter(std::string fill);
    std::string convert(Rectangle info);
};