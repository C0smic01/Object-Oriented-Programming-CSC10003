#include "Product.h"

Product::Product(string ID, string name, float price, int day, int month, int year):_expiryDate(day, month, year)
{
	Product::_ID = ID;
	Product::_name = name;
	Product::_price = price;
}

string Product::getID()
{
	return _ID;
}

string Product::getName()
{
	return _name;
}

float Product::getPrice()
{
	return _price;
}

Date Product::getExpiryDate()
{
	return _expiryDate;
}