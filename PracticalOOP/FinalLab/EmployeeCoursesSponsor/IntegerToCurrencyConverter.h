#pragma once
#include "IValueConverter.h"
#include "NumberFormatInfo.h"
#include "Wrapper.h"
#include <string>
#include <sstream>
#include <regex>

class IntegerToCurrencyConverter : public IValueConverter
{
public:
	std::string convert(std::shared_ptr<Object> object) override;
	std::string toString() override;
};