#include "SumPrice.h"

int SumPrice::Sum(std::vector<std::shared_ptr<Booth>> booths)
{
    int sum = 0;
    for (int i = 0; i < booths.size(); i++)
    {
        sum += booths[i]->totalPrice();
    }
    return sum;
}

std::string SumPrice::Format(std::vector<std::shared_ptr<Booth>> booths)
{
    int sumPrice = SumPrice::Sum(booths);
    std::shared_ptr<Wrapper<int>> value(new Wrapper<int>(sumPrice));
    IntegerToCurrencyConverter converter;
    std::string formatted = converter.convert(value);
    return formatted;
}