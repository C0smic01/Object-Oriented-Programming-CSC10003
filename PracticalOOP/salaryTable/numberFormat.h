#pragma once
#include <string>

class numberFormat 
{
private:
    std::string _thousandSeparator;
    int _precision;
public:
    numberFormat(std::string thousandSeparator, int precision);
    std::string getThousandSeparator();
    int getPrecision();
};