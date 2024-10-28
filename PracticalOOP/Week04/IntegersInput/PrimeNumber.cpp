#include "PrimeNumber.h"

void PrimeNumber::primeCheck(std::vector<int> vt)
{
	for (int i = 0; i < vt.size(); i++)
	{
		bool Primeflag = true;
		for (int j = 2; j < vt[i] / 2; j++)
		{
			if (vt[i] % j == 0)
			{
				Primeflag = false;
				break;
			}
		}
		if (Primeflag)
		{
			PrimeNumber::primeNumbers.array.push_back(vt[i]);
		}
	}
}