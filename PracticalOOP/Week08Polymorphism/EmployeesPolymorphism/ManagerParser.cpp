#include "ManagerParser.h"

Object* ManagerParser::parse(std::string input)
{
	int firstEqualSignPos = input.find('=');
	int fisrtCommaPos = input.find(',');
	int secondEqualSignPos = input.find('=', firstEqualSignPos + 1);
	int secondCommaPos = input.find(',', fisrtCommaPos + 1);
	int thirdEqualSignPos = input.rfind('=');

	int employeeCount = std::stoi(input.substr(firstEqualSignPos + 1, fisrtCommaPos - firstEqualSignPos - 1));
	int paymentPerEmployee = std::stoi(input.substr(secondEqualSignPos + 1, secondCommaPos - secondEqualSignPos - 1));
	int baseSalary = std::stoi(input.substr(thirdEqualSignPos + 1));
	Object* manager = new Manager(employeeCount, baseSalary, paymentPerEmployee);
	return manager;
}

std::string ManagerParser::parsedObjectName()
{
	std::string output = "Manager";
	return output;
}