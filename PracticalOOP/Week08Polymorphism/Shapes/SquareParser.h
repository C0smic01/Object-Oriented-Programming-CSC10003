#pragma once
#include "IParsable.h"
#include "Square.h"
#include <string>

class SquareParser : public IParsable
{
public:
	Object* parse(std::string value) override;
	std::string parsedObjectName() override;
};