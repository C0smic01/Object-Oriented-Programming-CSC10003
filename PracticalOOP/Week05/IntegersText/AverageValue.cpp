#include "AverageValue.h"

void AverageValue::averageCheck(std::vector<int> vt)
{
	float sum = 0;
	for (int i = 0; i < vt.size(); i++)
	{
		sum += vt[i];
	}
	average = sum / vt.size();
}

float AverageValue::getAverage()
{
	return average;
}