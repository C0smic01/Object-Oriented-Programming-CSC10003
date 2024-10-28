#include "Clothes.h"

Clothes::Clothes(std::string ID, int area) : Booth(ID, area, 0) {}


std::string Clothes::toString()
{
	return "Quan ao";
}