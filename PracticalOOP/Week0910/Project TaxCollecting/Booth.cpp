#include "Booth.h"

Booth::Booth(std::string ID, int area, int fee)
{
	Booth::_ID = ID;
	Booth::_area = area;
	Booth::_fee = fee;
}

int Booth::totalPrice()
{
	return Booth::_area * Booth::_pricePerM2 + Booth::_fee;
}

int Booth::rentPrice()
{
	return Booth::_area * Booth::_pricePerM2;
}

std::string Booth::getID()
{
	return Booth::_ID;
}

int Booth::getArea()
{
	return Booth::_area;
}

int Booth::getPricePerM2()
{
	return Booth::_pricePerM2;
}

int Booth::getFee()
{
	return Booth::_fee;
}