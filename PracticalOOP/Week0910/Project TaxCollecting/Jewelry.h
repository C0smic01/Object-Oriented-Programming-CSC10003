#pragma once
#include "Booth.h"

class Jewelry : public Booth
{
public:
	Jewelry(std::string ID, int area, int fee);
	std::string toString() override;
};