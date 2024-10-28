#pragma once
#include "Object.h"

class IParsable : public Object
{
public:
	virtual std::shared_ptr<Object> Parse(std::string input) = 0;
	virtual std::string parsedObjectName() = 0;
};