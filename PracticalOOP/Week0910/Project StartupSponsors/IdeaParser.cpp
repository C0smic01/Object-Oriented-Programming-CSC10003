#include "IdeaParser.h"

std::shared_ptr<Object> IdeaParser::Parse(std::string input)
{
	int commaPos = input.find(','),
		equalSignPos = input.find('=');

	std::string name = input.substr(1, commaPos - 1);
	int devDuration = std::stoi(input.substr(equalSignPos + 1));
	std::shared_ptr<Object> idea(new Idea(name, devDuration));
	return idea;
}

std::string IdeaParser::parsedObjectName()
{
	std::string name = "Idea";
	return name;
}

std::string IdeaParser::toString() 
{
	return "";
}