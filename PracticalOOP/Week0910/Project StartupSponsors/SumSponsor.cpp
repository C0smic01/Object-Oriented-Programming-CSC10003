#include "SumSponsor.h"

int SumSponsor::Sum(std::vector<std::shared_ptr<Project>> projects)
{
    int sum = 0;
    for (int i = 0; i < projects.size(); i++)
    {
        sum += projects[i]->Sponsor();
    }
    return sum;
}

std::string SumSponsor::Format(std::vector<std::shared_ptr<Project>> projects)
{
    int sumSponsorMoney = SumSponsor::Sum(projects);
    std::shared_ptr<Wrapper<int>> value(new Wrapper<int>(sumSponsorMoney));
    IntegerToCurrencyConverter converter;
    std::string formatted = converter.convert(value);
    return formatted;
}