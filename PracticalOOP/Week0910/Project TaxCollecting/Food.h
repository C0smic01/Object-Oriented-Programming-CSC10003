#pragma once
#include "Booth.h"

class Food : public Booth
{
public:
	Food(std::string ID, int area, int fee);
	std::string toString() override;
};