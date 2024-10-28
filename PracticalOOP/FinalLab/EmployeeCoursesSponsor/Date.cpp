#include "Date.h"

Date::Date(int month, int year)
{
	Date::_month = month;
	Date::_year = year;
}

std::string Date::getLevel()
{
	int absoluteMonth = (Date::_defaultYear - Date::_year) * 12 + Date::_defaultMonth - Date::_month;

	if (absoluteMonth < 12)
	{
		return "Fresher";
	}
	else if (absoluteMonth >= 12 && absoluteMonth < 24)
	{
		return "Junior";
	}
	else
	{
		return "Senior";
	}
}