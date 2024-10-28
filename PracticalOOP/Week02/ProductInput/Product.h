#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Product
{
private:
	string _ID, _name;
	float _price;
	Date _expiryDate;
public:
	Product(string ID, string name, float price, int day, int month, int year);
	string getID();
	string getName();
	float getPrice();
	Date getExpiryDate();
};