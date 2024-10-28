#pragma once
#include "Project.h"
#include "Wrapper.h"
#include "IntegerToCurrencyConverter.h"
#include <vector>

class SumSponsor
{
public:
    static int Sum(std::vector<std::shared_ptr<Project>> projects);
    static std::string Format(std::vector<std::shared_ptr<Project>> projects);
};