#include "MinValue.h"

void MinValue::minCheck(std::vector<int> vt)
{
	min = vt[0];
	for (int i = 1; i < vt.size(); i++)
	{
		if (vt[i] < min)
		{
			min = vt[i];
		}
	}
}

int MinValue::getMin()
{
	return min;
}