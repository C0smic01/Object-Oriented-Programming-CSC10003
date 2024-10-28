#include "DoubleToCurrencyConverter.h"

std::string DoubleToCurrencyConverter::convert(std::shared_ptr<Object> object)
{
	auto number = std::dynamic_pointer_cast<Wrapper<double>>(object);
	double value = number->value();

	// Split the number into integer and decimal parts
	std::string temp = std::to_string(value);
	int dotPos = temp.find(".");
	std::string decimalPart = temp.substr(dotPos + 1);
	int integerPart = std::stoi(temp.substr(0, dotPos));
	std::stringstream builder;
	NumberFormatInfo info;
	int count = 0;

	reverse(decimalPart.begin(), decimalPart.end());
	// Remove trailing zeros from decimal part
	while (decimalPart[0] == '0')
	{
		decimalPart.erase(0, 1);
	}
	// If decimal part is empty, remove the decimal separator
	if (!decimalPart.empty())
	{
		builder << decimalPart << info.currencyDecimalSeparator();
	}

	if (integerPart == 0)
	{
		builder << "0";
	}

	while (integerPart != 0)
	{
		int lastDigit = integerPart % 10;
		integerPart /= 10;
		builder << lastDigit;

		count++;

		if (count == 3 && integerPart != 0)
		{
			builder << info.currencyThousandSeparator();
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

std::string DoubleToCurrencyConverter::toString()
{
	return "";
}