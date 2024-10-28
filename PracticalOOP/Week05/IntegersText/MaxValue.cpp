#include "MaxValue.h"

void MaxValue::maxCheck(std::vector<int> vt)
{
	max = vt[0];
	for (int i = 1; i < vt.size(); i++)
	{
		if (vt[i] > max)
		{
			max = vt[i];
		}
	}
}

int MaxValue::getMax()
{
	return max;
}