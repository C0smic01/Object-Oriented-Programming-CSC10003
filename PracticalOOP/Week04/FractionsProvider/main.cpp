#include "FractionKeyboardProvider.h"
#include "Fraction.h"
#include <iostream>

int main()
{
	FractionKeyboardProvider provider;
	std::vector<Fraction> a = provider.next(1, 20);

	std::cout << "All entered fractions: ";
	for (int i = 0; i < a.size(); i++)
	{
		if (i == a.size() - 1)
		{
			std::cout << a[i].toString() << std::endl;
		}
		else std::cout << a[i].toString() << ", ";
	}

}