#include "IntegerToCurrencyConverter.h"

std::string IntegerToCurrencyConverter::convert(std::shared_ptr<Object> object)
{
	auto number = std::dynamic_pointer_cast<Wrapper<int>>(object);
	int value = number->value();

	std::stringstream builder;
	NumberFormatInfo info;
	int count = 0;

	if (value == 0)
	{
		builder << "0";
	}

	while (value != 0) 
	{
		int lastDigit = value % 10;
		value /= 10;
		builder << lastDigit;

		count++;

		if (count == 3 && value != 0) 
		{
			builder << info.currencyDecimalSeparator();
			count = 0;
		}
	}

	std::string numberSeparated = builder.str(); 
	reverse(numberSeparated.begin(), numberSeparated.end());

	std::string format = info.currencyPositiveFormat();
	std::string symbol = info.currencySymbol(); 

	std::string result = std::regex_replace(format, std::regex("n"), numberSeparated);
	result = std::regex_replace(result, std::regex("\\$"), symbol);

	return result;
}

std::string IntegerToCurrencyConverter::toString() 
{
	return "";
}