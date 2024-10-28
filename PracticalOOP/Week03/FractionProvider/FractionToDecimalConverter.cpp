#include "FractionToDecimalConverter.h"

FractionToDecimalConverter::FractionToDecimalConverter(NumberFormat config):_config(config){}

std::string FractionToDecimalConverter::convert(const Fraction& f)
{
	Fraction temp = f;
	std::string result = std::to_string((double)temp.getNumerator() / temp.getDenominator());
	int precision = this->_config.getPrecision(),
		decimalPoint = result.find(".");

	// Truncate the result to the desired precision
	if (precision == 0)
	{
		result = result.substr(0, decimalPoint);
	}
	else
	{
		result = result.substr(0, decimalPoint + precision + 1);
	}

	// Format the result
	std::string decimalSeperator = this->_config.getDecimalSeparator(),
		thousandSeperator = this->_config.getThousandSeparator();
	// Replace the decimal point with the desired decimal separator
	result[decimalPoint] = decimalSeperator[0];
	// Insert thousand separators
	for (int i = decimalPoint - 3; i > 0; i -= 3)
	{
		result.insert(i, thousandSeperator);
	}

	return result;
}	