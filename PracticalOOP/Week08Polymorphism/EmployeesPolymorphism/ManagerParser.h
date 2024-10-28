#pragma once
#include "IParsable.h"
#include "Manager.h"
#include <string>

class ManagerParser : public IParsable
{
public:
	Object* parse(std::string input) override;
	std::string parsedObjectName() override;
};