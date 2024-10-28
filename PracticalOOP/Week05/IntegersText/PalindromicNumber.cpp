#include "PalindromicNumber.h"

void PalindromicNumber::palindromicCheck(std::vector<int> vt)
{
	for (int i = 0; i < vt.size(); i++)
	{
		int num = vt[i];
		int reverse = 0;
		int temp = num;
		while (temp != 0)
		{
			reverse = reverse * 10 + temp % 10;
			temp = temp / 10;
		}
		if (num == reverse)
		{
			palindromicNumbers.push_back(num);
		}
	}
}

std::vector<int> PalindromicNumber::getPalindromicNumbers()
{
	return palindromicNumbers;
}