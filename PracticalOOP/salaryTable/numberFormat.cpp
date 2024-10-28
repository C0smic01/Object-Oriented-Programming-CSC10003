#include "numberFormat.h"

numberFormat::numberFormat(std::string thousandSeparator, int precision)
{
    this->_thousandSeparator = thousandSeparator;
    this->_precision = precision;
}

std::string numberFormat::getThousandSeparator()
{
    return this->_thousandSeparator;
}

int numberFormat::getPrecision()
{
    return this->_precision;
}