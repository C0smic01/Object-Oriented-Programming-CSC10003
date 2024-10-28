#pragma once
#include "Jewelry.h"
#include "Food.h"
#include "Clothes.h"
#include "NumberFormatInfo.h"
#include "IntegerToCurrencyConverter.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <tuple>
#include <memory>

class boothsToTableConverter
{
private:
    std::vector<std::string> _headers;
    std::vector<int> _columnSizes;

public:
    boothsToTableConverter(std::vector<std::string> headers, std::vector<int> columnSizes);
    std::string convert(std::vector<std::shared_ptr<Booth>> booths);

private:
    class boothToRowConverter
    {
    private:
        static int index;
        std::vector<int> _columnSizes;
    public:
        boothToRowConverter(std::vector<int> columnSizes);
        std::string format(std::shared_ptr<Object> booth);
        std::string convert(std::shared_ptr<Booth> booth);
    };
};