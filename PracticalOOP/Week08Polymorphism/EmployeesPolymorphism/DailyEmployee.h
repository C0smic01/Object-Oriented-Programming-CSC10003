#pragma once
#include "Employee.h"
#include <format>

class DailyEmployee : public Employee
{
private:
	int _dayCount;
	int _paymentPerDay;
public:
	DailyEmployee(int dayCount, int paymentPerDay);
	int salary() override;
	std::string toString() override;
};