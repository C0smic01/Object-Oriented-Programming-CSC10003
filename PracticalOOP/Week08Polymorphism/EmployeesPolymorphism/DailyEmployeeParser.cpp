#include "DailyEmployeeParser.h"

Object* DailyEmployeeParser::parse(std::string input)
{
	int equalSignPos1 = input.find('='); // Find the position of the equal sign
	int commaPos = input.find(','); // Find the position of the comma
	int equalSignPos2 = input.rfind('='); // Find the position of the second equal sign

	int dayCount = std::stoi(input.substr(equalSignPos1 + 1, commaPos - equalSignPos1 - 1));
	int paymentPerDay = std::stoi(input.substr(equalSignPos2 + 1));
	Object* dailyEmployee = new DailyEmployee(dayCount, paymentPerDay);
	return dailyEmployee;
}

std::string DailyEmployeeParser::parsedObjectName()
{
	return "DailyEmployee";
}