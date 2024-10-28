#pragma once
#include "Object.h"

class IValueConverter : public Object
{
public:
	virtual std::string convert(std::shared_ptr<Object> object) = 0;
};