#pragma once
#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int _day, _month, _year;
public:
	Date(int day, int month, int year);
	int getDay();
	int getMonth();
	int getYear();
};