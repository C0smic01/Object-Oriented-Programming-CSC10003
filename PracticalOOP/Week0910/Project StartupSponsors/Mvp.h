#pragma once
#include "Project.h"

class Mvp : public Project
{
private:
	int _runningWebsiteMoney = 930;
	int _marketingMoney = 500;

	std::string _name;
	int _runningWebsiteDuration;
	int _marketingDuration;
public:
	Mvp(std::string name, int runningWebsiteDuration, int marketingDuration);
	int Sponsor() override;
	std::string toString() override;
	std::string getName() override;
	std::string getProjectType() override;
};