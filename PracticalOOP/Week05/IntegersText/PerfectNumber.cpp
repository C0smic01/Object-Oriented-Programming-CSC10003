#include "PerfectNumber.h"

void PerfectNumber::perfectCheck(std::vector<int> vt)
{
	int sum = 0;
	for (int i = 0; i < vt.size(); i++)
	{
		for (int j = 1; j < vt[i]; j++)
		{
			if (vt[i] % j == 0)
			{
				sum += j;
			}
		}
		if (sum == vt[i])
		{
			perfectNumbers.push_back(vt[i]);
		}
		sum = 0;
	}
}

std::vector<int> PerfectNumber::getPerfectNumbers()
{
	return perfectNumbers;
}