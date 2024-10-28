#pragma once
#include "Object.h"
class IParsable
{
public:
	virtual Object* parse(std::string) = 0;
	virtual std::string parsedObjectName() = 0;
};