#include "DailyEmployee.h"

DailyEmployee::DailyEmployee(int dayCount, int paymentPerDay)
{
	DailyEmployee::_dayCount = dayCount;
	DailyEmployee::_paymentPerDay = paymentPerDay;
}

int DailyEmployee::salary()
{
	int salaryTotal = DailyEmployee::_dayCount * DailyEmployee::_paymentPerDay;
	return salaryTotal;
}

std::string DailyEmployee::toString()
{
	std::string output = "Daily employee";
	return output;
}