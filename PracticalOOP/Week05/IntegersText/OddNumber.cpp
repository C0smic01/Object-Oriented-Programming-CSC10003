#include "OddNumber.h"

void OddNumber::oddCheck(std::vector<int> vt)
{
	for (int i = 0; i < vt.size(); i++)
	{
		if (vt[i] % 2 != 0)
		{
			oddNumbers.push_back(vt[i]);
		}
	}
}

std::vector<int> OddNumber::getOddNumbers()
{
	return oddNumbers;
}