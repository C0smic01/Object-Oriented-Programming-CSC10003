#include "JewelryParser.h"

std::shared_ptr<Object> JewelryParser::Parse(std::string input)
{
	int firstCommaPos = input.find(','),
		secondCommaPos = input.find(',', firstCommaPos + 1),
		firstEqualSignPos = input.find('='),
		secondEqualSignPos = input.find('=', firstEqualSignPos + 1),
		thirdEqualSignPos = input.find('=', secondEqualSignPos + 1);

	std::string ID = input.substr(firstEqualSignPos + 1, firstCommaPos - firstEqualSignPos - 1);
	int area = std::stoi(input.substr(secondEqualSignPos + 1, secondCommaPos - secondEqualSignPos - 1));
	int fee = std::stoi(input.substr(thirdEqualSignPos + 1));
	std::shared_ptr<Object> jewelry(new Jewelry(ID, area, fee));
	return jewelry;
}

std::string JewelryParser::parsedObjectName()
{
	std::string name = "Jewelry";
	return name;
}

std::string JewelryParser::toString()
{
	return "";
}