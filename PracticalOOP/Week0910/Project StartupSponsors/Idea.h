#pragma once
#include "Project.h"

class Idea : public Project
{
private:
	int _supportMoney = 2200;
	std::string _name;
	int _devDuration;
public:
	Idea(std::string name, int devDuration);
	int Sponsor() override;
	std::string toString() override;
	std::string getName() override;
	std::string getProjectType();
};