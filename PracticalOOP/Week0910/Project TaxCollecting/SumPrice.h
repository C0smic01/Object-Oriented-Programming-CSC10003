#pragma once
#include "Booth.h"
#include "Wrapper.h"
#include "IntegerToCurrencyConverter.h"
#include <vector>

class SumPrice
{
public:
    static int Sum(std::vector<std::shared_ptr<Booth>> booths);
    static std::string Format(std::vector<std::shared_ptr<Booth>> booths);
};