#include "SeniorParser.h"

std::shared_ptr<Object> SeniorParser::Parse(std::string input)
{
	int employeeNamePos = input.find("Name="),
		courseNamePos = input.find("Name=", employeeNamePos + 1),
		costPos = input.find("Cost=$"),
		firstCommaPos = input.find(","),
		lastCommaPos = input.rfind(",");

	std::string name = input.substr(employeeNamePos + 5, firstCommaPos - employeeNamePos - 5),
		course = input.substr(courseNamePos + 5, lastCommaPos - courseNamePos - 5);
	double fullCost = std::stod(input.substr(costPos + 6));
	std::shared_ptr<Object> senior(new Senior(name, course, fullCost));
	return senior;
}

std::string SeniorParser::parsedObjectName()
{
	std::string name = "Senior";
	return name;
}

std::string SeniorParser::toString()
{
	return "";
}