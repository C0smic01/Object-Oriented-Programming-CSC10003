#pragma once
#include "Fraction.h"
#include "NumberFormat.h"

class FractionToPercentageConverter 
{
private:
	NumberFormat _config;
public:
	FractionToPercentageConverter(NumberFormat config);
	std::string convert(const Fraction& f);
};