#pragma once
#include "IValueConverter.h"
#include "NumberFormatInfo.h"
#include "Integer.h"
#include <string>
#include <sstream>
#include <regex>

class IntegerToCurrencyConverter : public IValueConverter
{
public:
	std::string convert(Object* object) override;
	std::string toString() override;
};