#pragma once
#include "Object.h"
#include <format>

class Booth : public Object
{
protected:
	std::string _ID;
	int _area;
	int _pricePerM2 = 560000;
	int _fee;
public:
	Booth(std::string ID, int area, int fee);
	int totalPrice();
	int rentPrice();
	std::string getID();
	int getArea();
	int getPricePerM2();
	int getFee();
};