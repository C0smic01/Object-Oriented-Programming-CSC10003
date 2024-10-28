#include "SquareNumber.h"

void SquareNumber::squareCheck(std::vector<int> vt)
{
	for (int i = 0; i < vt.size(); i++)
	{
		if (sqrt(vt[i]) == (int)sqrt(vt[i]))
		{
			squareNumbers.push_back(vt[i]);
		}
	}
}

std::vector<int> SquareNumber::getSquareNumbers()
{
	return squareNumbers;
}