#include "Mvp.h"

Mvp::Mvp(std::string name, int runningWebsiteDuration, int marketingDuration)
{
	Mvp::_name = name;
	Mvp::_runningWebsiteDuration = runningWebsiteDuration;
	Mvp::_marketingDuration = marketingDuration;
}

int Mvp::Sponsor()
{
	int sponsorMoney = Mvp::_runningWebsiteDuration * Mvp::_runningWebsiteMoney + Mvp::_marketingDuration * Mvp::_marketingMoney;
	return sponsorMoney;
}

std::string Mvp::toString()
{
	std::string output = std::format("Van hanh: {} thang. Marketing: {} thang", Mvp::_runningWebsiteDuration, Mvp::_marketingDuration);
	return output;
}

std::string Mvp::getName()
{
	return Mvp::_name;
}

std::string Mvp::getProjectType()
{
	std::string type = "San pham";
	return type;
}