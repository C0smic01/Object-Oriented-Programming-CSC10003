#pragma once
#include "IParsable.h"
#include "Circle.h"
#include <string>

class CircleParser : public IParsable
{
public:
	Object* parse(std::string value) override;
	std::string parsedObjectName() override;
};