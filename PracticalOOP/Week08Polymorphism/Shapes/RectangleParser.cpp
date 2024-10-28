#include "RectangleParser.h"

Object* RectangleParser::parse(std::string value)
{
	int equalSignPos1 = value.find('='); // Find the position of the equal sign
	int commaPos = value.find(','); // Find the position of the comma
	int equalSignPos2 = value.rfind('='); // Find the position of the second equal sign

	double width = std::stod(value.substr(equalSignPos1 + 1, commaPos - equalSignPos1 - 1)); // Get the width value
	double height = std::stod(value.substr(equalSignPos2 + 1)); // Get the height value
	Object* rectangle = new Rectangle(width, height);
	return rectangle;
}

std::string RectangleParser::parsedObjectName()
{
	return "Rectangle";
}