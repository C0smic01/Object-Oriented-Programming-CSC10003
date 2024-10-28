#include "MvpParser.h"

std::shared_ptr<Object> MvpParser::Parse(std::string input)
{
	int firstCommaPos = input.find(','),
		secondCommaPos = input.find(',', firstCommaPos + 1),
		firstEqualSignPos = input.find('='),
		secondEqualSignPos = input.find('=', firstEqualSignPos + 1);

	std::string name = input.substr(1, firstCommaPos - 1);
	int runningWebsiteDuration = std::stoi(input.substr(firstEqualSignPos + 1, secondCommaPos - firstEqualSignPos - 1));
	int marketingDuration = std::stoi(input.substr(secondEqualSignPos + 1));
	std::shared_ptr<Object> mvp(new Mvp(name, runningWebsiteDuration, marketingDuration));
	return mvp;
}

std::string MvpParser::parsedObjectName()
{
	std::string name = "Mvp";
	return name;
}

std::string MvpParser::toString() 
{
	return "";
}