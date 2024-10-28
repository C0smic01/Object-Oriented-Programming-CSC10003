#include "Manager.h"

Manager::Manager(int employeeCount, int baseSalary, int paymentPerEmployee)
{
	Manager::_employeeCount = employeeCount;
	Manager::_baseSalary = baseSalary;
	Manager::_paymentPerEmployee = paymentPerEmployee;
}

int Manager::salary()
{
	int salaryTotal = Manager::_employeeCount * Manager::_paymentPerEmployee + Manager::_baseSalary;
	return salaryTotal;
}

std::string Manager::toString()
{
	std::string output = "Manager";
	return output;
}