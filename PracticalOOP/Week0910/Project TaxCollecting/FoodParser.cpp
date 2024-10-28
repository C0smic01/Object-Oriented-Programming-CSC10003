#include "FoodParser.h"

std::shared_ptr<Object> FoodParser::Parse(std::string input)
{
	int firstCommaPos = input.find(','), 
		secondCommaPos = input.find(',', firstCommaPos + 1),
		firstEqualSignPos = input.find('='),
		secondEqualSignPos = input.find('=', firstEqualSignPos + 1),
		thirdEqualSignPos = input.find('=', secondEqualSignPos + 1);

	std::string ID = input.substr(firstEqualSignPos + 1, firstCommaPos - firstEqualSignPos - 1);
	int area = std::stoi(input.substr(secondEqualSignPos + 1, secondCommaPos - secondEqualSignPos - 1));
	int fee = std::stoi(input.substr(thirdEqualSignPos + 1));
	std::shared_ptr<Object> food(new Food(ID, area, fee));
	return food;
}

std::string FoodParser::parsedObjectName()
{
	std::string name = "Food";
	return name;
}

std::string FoodParser::toString()
{
	return "";
}