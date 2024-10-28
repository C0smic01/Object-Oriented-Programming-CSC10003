#include "Jewelry.h"

Jewelry::Jewelry(std::string ID, int area, int fee) : Booth(ID, area, fee) {};

std::string Jewelry::toString()
{
	return "Da qui";
}