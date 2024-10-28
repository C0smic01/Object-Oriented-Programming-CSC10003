#pragma once
#include "Booth.h"

class Clothes : public Booth
{	
public:
	Clothes(std::string ID, int area);
	std::string toString() override;
};