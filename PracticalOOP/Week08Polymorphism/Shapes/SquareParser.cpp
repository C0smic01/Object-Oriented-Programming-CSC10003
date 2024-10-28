#include "SquareParser.h"

Object* SquareParser::parse(std::string value)
{
	int equalSignPos = value.find('='); // Find the position of the equal sign
	double length = std::stod(value.substr(equalSignPos + 1)); // Get the value after the equal sign
	Object* square = new Square(length); 
	return square;
}

std::string SquareParser::parsedObjectName()
{
	return "Square";
}