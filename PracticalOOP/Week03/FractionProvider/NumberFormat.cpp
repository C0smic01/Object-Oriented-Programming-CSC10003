#include "NumberFormat.h"

NumberFormat::NumberFormat(std::string thousand, std::string dec, int precision) 
{
	_thousandSeparator = thousand;
	_decimalSeparator = dec;
	_precision = precision;
}

std::string NumberFormat::getThousandSeparator()
{
	return _thousandSeparator;
}

std::string NumberFormat::getDecimalSeparator()
{
	return _decimalSeparator;
}

int NumberFormat::getPrecision()
{
	return _precision;
}