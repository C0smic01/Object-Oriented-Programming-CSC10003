#pragma once
#include "IParsable.h"
#include "ProductEmployee.h"
#include <string>

class ProductEmployeeParser : public IParsable
{
public:
	Object* parse(std::string input) override;
	std::string parsedObjectName() override;
};