#pragma once
#include <iostream>
#include <string>

class NumberFormat {
private:
	std::string _thousandSeparator; // "." / "," / " "
	std::string _decimalSeparator;  // "," / "."
	int _precision; // 2 / 3
public:
	NumberFormat(std::string thousand, std::string dec, int precision);
	std::string getThousandSeparator();
	std::string getDecimalSeparator();
	int getPrecision();
};