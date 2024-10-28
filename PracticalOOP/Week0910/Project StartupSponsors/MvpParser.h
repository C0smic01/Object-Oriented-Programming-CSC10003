#pragma once
#include "Object.h"
#include "IParsable.h"
#include "Mvp.h"

class MvpParser : public IParsable
{
public:
	std::shared_ptr<Object> Parse(std::string input) override;
	std::string parsedObjectName() override;
	std::string toString() override;
};