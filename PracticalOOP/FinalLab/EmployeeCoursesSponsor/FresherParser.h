#pragma once
#include "IParsable.h"
#include "Fresher.h"

class FresherParser : public IParsable
{
	std::shared_ptr<Object> Parse(std::string input) override;
	std::string parsedObjectName() override;
	std::string toString() override;
};