#pragma once
#include "IParsable.h"
#include "DailyEmployee.h"
#include <string>

class DailyEmployeeParser : public IParsable
{
public:
	Object* parse(std::string input) override;
	std::string parsedObjectName() override;
};