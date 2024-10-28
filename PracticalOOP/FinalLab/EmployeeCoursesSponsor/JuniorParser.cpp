#include "JuniorParser.h"

std::shared_ptr<Object> JuniorParser::Parse(std::string input)
{
	int employeeNamePos = input.find("Name="),
		courseNamePos = input.find("Name=", employeeNamePos + 1),
		costPos = input.find("Cost=$"),
		firstCommaPos = input.find(","),
		lastCommaPos = input.rfind(",");

	std::string name = input.substr(employeeNamePos + 5, firstCommaPos - employeeNamePos - 5),
		course = input.substr(courseNamePos + 5, lastCommaPos - courseNamePos - 5);
	double fullCost = std::stod(input.substr(costPos + 6));
	std::shared_ptr<Object> junior(new Junior(name, course, fullCost));
	return junior;
}

std::string JuniorParser::parsedObjectName()
{
	std::string name = "Junior";
	return name;
}

std::string JuniorParser::toString()
{
	return "";
}