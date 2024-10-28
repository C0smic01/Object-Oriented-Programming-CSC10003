#include "Fraction.h"
#include "FractionsProvider.h"
#include "FractionToDecimalConverter.h"
#include "FractionToPercentageConverter.h"
#include "NumberFormat.h"

int main()
{
	FractionsProvider provider;
	std::vector<Fraction> fractions = provider.read("input.txt");
	std::cout << "Found " << fractions.size() << " fractions: ";
	for (int i = 0; i < fractions.size(); i++)
	{
		if (i == fractions.size() - 1)
		{
			std::cout << fractions[i].toString() << std::endl;
		}
		else std::cout << fractions[i].toString() << ", ";
	}


	std::cout << "Lowest terms: ";
	for (int i = 0; i < fractions.size(); i++)
	{
		if (i == fractions.size() - 1)
		{
			std::cout << fractions[i].lowestTerm() << std::endl;
		}
		else std::cout << fractions[i].lowestTerm() << ", ";
	}

	NumberFormat format1(",", ".", 2);
	FractionToDecimalConverter decimalConverter(format1);
	std::cout << "Decimal: ";
	for (int i = 0; i < fractions.size(); i++)
	{
		if (i == fractions.size() - 1)
		{
			std::cout << decimalConverter.convert(fractions[i]) << std::endl;
		}
		else std::cout << decimalConverter.convert(fractions[i]) << ", ";
	}

	NumberFormat format2(",", ".", 0);
	FractionToPercentageConverter percentageConverter(format2);
	std::cout << "Percentage: ";
	for (int i = 0; i < fractions.size(); i++)
	{
		if (i == fractions.size() - 1)
		{
			std::cout << percentageConverter.convert(fractions[i]) << std::endl;
		}
		else std::cout << percentageConverter.convert(fractions[i]) << ", ";
	}
	return 0;
}