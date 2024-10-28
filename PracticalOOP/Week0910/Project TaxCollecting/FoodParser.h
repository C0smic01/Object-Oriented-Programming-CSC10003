#pragma once
#include "IParsable.h"
#include "Food.h"

class FoodParser : public IParsable
{
public:
	std::shared_ptr<Object> Parse(std::string input) override;
	std::string parsedObjectName() override;
	std::string toString() override;
};