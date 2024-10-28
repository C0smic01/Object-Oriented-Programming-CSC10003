#pragma once
#include <string>

class Date
{
private:
	// Timestamp is 05/2024
	int _defaultYear = 2024;
	int _defaultMonth = 5;
	int _year;
	int _month;
public:
	Date(int month, int year);
	std::string getLevel();
};