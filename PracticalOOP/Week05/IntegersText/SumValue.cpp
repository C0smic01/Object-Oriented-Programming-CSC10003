#include "SumValue.h"

void SumValue::sumCheck(std::vector<int> vt)
{
	sum = 0;
	for (int i = 0; i < vt.size(); i++)
	{
		sum += vt[i];
	}
}

int SumValue::getSum()
{
	return sum;
}