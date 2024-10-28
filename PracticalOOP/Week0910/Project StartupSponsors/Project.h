#pragma once
#include "Object.h"
#include <format>

class Project : public Object
{
public:
	virtual int Sponsor() = 0;
	virtual std::string getName() = 0;
	virtual std::string getProjectType() = 0;
};