#include "Date.h"

Date::Date(int day, int month, int year)
{
	Date::_day = day;
	Date::_month = month;
	Date::_year = year;
}

int Date::getDay()
{
	return _day;
}

int Date::getMonth()
{
	return _month;
}

int Date::getYear()
{
	return _year;
}