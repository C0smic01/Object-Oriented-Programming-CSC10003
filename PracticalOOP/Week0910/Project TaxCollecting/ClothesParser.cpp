#include "ClothesParser.h"

std::shared_ptr<Object> ClothesParser::Parse(std::string input)
{
	// Clothes ID=B419, Area=33
	int firstCommaPos = input.find(','),
		firstEqualSignPos = input.find('='),
		secondEqualSignPos = input.find('=', firstEqualSignPos + 1);

	std::string ID = input.substr(firstEqualSignPos + 1, firstCommaPos - firstEqualSignPos - 1);
	int area = std::stoi(input.substr(secondEqualSignPos + 1));
	std::shared_ptr<Object> clothes(new Clothes(ID, area));
	return clothes;
}

std::string ClothesParser::parsedObjectName()
{
	std::string name = "Clothes";
	return name;
}

std::string ClothesParser::toString()
{
	return "";
}