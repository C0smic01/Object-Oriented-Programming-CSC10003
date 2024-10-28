#include "CircleParser.h"

Object* CircleParser::parse(std::string value) 
{
	int equalSignPos = value.find('='); // Find the position of the equal sign
	double length = std::stod(value.substr(equalSignPos + 1)); // Get the value after the equal sign
	Object* circle = new Circle(length);
	return circle;
}

std::string CircleParser::parsedObjectName()
{
	return "Circle";
}