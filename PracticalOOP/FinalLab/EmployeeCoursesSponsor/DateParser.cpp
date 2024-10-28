#include "DateParser.h"

Date DateParser::Parse(std::string input)
{
	int firstSlashPos = input.find('/'),
		secondSlashPos = input.find('/', firstSlashPos + 1),
		deduceSignPos = input.find("=>", secondSlashPos + 1);

	int month = std::stoi(input.substr(firstSlashPos + 1, secondSlashPos - firstSlashPos - 1)),
		year = std::stoi(input.substr(secondSlashPos + 1, deduceSignPos - secondSlashPos - 1));
	Date date(month, year);
	return date;
}