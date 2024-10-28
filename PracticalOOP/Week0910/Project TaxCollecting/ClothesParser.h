#pragma once
#include "IParsable.h"
#include "Clothes.h"

class ClothesParser : public IParsable
{
public:
	std::shared_ptr<Object> Parse(std::string input) override;
	std::string parsedObjectName() override;
	std::string toString() override;
};