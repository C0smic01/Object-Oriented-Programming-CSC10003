#include "SumPrice.h"

double SumPrice::Sum(std::vector<std::shared_ptr<Employee>> employees)
{
    double sum = 0;
    for (int i = 0; i < employees.size(); i++)
    {
        sum += employees[i]->Price();
    }
    return sum;
}

std::string SumPrice::Format(std::vector<std::shared_ptr<Employee>> employees)
{
    double sumPrice = SumPrice::Sum(employees);
    std::shared_ptr<Wrapper<double>> value(new Wrapper<double>(sumPrice));
    DoubleToCurrencyConverter converter;
    std::string formatted = converter.convert(value);
    return formatted;
}