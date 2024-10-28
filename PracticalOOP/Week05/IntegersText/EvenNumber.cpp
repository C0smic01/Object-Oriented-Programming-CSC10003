#include "EvenNumber.h"

void EvenNumber::evenCheck(std::vector<int> vt)
{
	for (int i = 0; i < vt.size(); i++)
	{
		if (vt[i] % 2 == 0)
		{
			evenNumbers.push_back(vt[i]);
		}
	}
}

std::vector<int> EvenNumber::getEvenNumbers()
{
	return evenNumbers;
}