#include "Food.h"

Food::Food(std::string ID, int area, int fee) : Booth(ID, area, fee) {};

std::string Food::toString()
{
	return "Thuc pham";
}