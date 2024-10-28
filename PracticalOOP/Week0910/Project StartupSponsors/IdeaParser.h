#pragma once
#include "Object.h"
#include "IParsable.h"
#include "Idea.h"

class IdeaParser : public IParsable
{
public:
	std::shared_ptr<Object> Parse(std::string input) override;
	std::string parsedObjectName() override;
	std::string toString() override;
};