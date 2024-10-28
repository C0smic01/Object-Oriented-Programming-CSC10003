#pragma once
#include <iostream>
#include <string>
#include "NumberFormat.h"
#include "Fraction.h"
class FractionToDecimalConverter {
private:
	NumberFormat _config;
public:
	FractionToDecimalConverter(NumberFormat config);
	std::string convert(const Fraction& f);
};