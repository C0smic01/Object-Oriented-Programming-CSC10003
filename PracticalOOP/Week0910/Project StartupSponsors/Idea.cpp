#include "Idea.h"

Idea::Idea(std::string name, int devDuration)
{
	Idea::_name = name;
	Idea::_devDuration = devDuration;
}

int Idea::Sponsor()
{
	int sponsorMoney = Idea::_devDuration * Idea::_supportMoney;
	return sponsorMoney;
}

std::string Idea::toString()
{
	std::string output = std::format("Phat trien: {} thang", Idea::_devDuration);
	return output;
}

std::string Idea::getName()
{
	return Idea::_name;
}

std::string Idea::getProjectType()
{
	std::string type = "Y tuong";
	return type;
}