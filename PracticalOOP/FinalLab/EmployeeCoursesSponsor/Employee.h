#pragma once
#include "Object.h"

class Employee : public Object
{
protected:
	std::string _name;
	std::string _course;
	double _fullCost;
public:
	// getFullCost() is to get the cost of the course before discount, Price() is to get the sponsorship fund 
	Employee(std::string name, std::string course, double fullCost);
	std::string getName();
	std::string getCourse();
	double getFullCost();

	virtual int getDiscount() = 0;
	virtual double Price() = 0;
};