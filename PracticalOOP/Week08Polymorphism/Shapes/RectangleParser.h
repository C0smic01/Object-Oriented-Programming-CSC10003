#pragma once
#include "IParsable.h"
#include "Rectangle.h"
#include <string>
#include <vector>

class RectangleParser : public IParsable
{
public:
	Object* parse(std::string value) override;
	std::string parsedObjectName() override;
};