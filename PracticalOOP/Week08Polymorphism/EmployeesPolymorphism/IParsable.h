#pragma once
#include <string>
#include "Object.h"
class IParsable
{
public:
	virtual Object* parse(std::string input) = 0;
	virtual std::string parsedObjectName() = 0;
};