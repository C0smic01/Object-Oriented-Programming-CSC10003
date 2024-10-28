#pragma once
#include "Employee.h"
#include "Wrapper.h"
#include "DoubleToCurrencyConverter.h"
#include <vector>

class SumPrice
{
public:
    static double Sum(std::vector<std::shared_ptr<Employee>> employees);
    static std::string Format(std::vector<std::shared_ptr<Employee>> employees);
};