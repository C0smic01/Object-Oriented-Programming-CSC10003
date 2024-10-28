#include "OddNumber.h"
#include "EvenNumber.h"
#include "PalindromicNumber.h"
#include "PrimeNumber.h"
#include "SquareNumber.h"
#include "PerfectNumber.h"
#include "IntegersTextProvider.h"
#include "MaxValue.h"
#include "MinValue.h"
#include "SumValue.h"
#include "AverageValue.h"

int main()
{
	IntegersTextProvider provider;
	std::vector<int> vt = provider.read("input.txt");

	std::cout << "Found " << vt.size() << " numbers: ";
	for (int i = 0; i < vt.size(); i++)
	{
		std::cout << vt[i] << " ";
	}
	std::cout << std::endl;

	OddNumber on;
	on.oddCheck(vt);
	std::vector<int> oddNumbers = on.getOddNumbers();
	std::cout << "Found " << oddNumbers.size() << " odd numbers: ";
	for (int i = 0; i < oddNumbers.size(); i++)
	{
		std::cout << oddNumbers[i] << " ";
	}
	std::cout << std::endl;

	EvenNumber en;
	en.evenCheck(vt);
	std::vector<int> evenNumbers = en.getEvenNumbers();
	std::cout << "Found " << evenNumbers.size() << " even numbers: ";
	for (int i = 0; i < evenNumbers.size(); i++)
	{
		std::cout << evenNumbers[i] << " ";
	}
	std::cout << std::endl;

	PalindromicNumber pn;
	pn.palindromicCheck(vt);
	std::vector<int> palindromicNumbers = pn.getPalindromicNumbers();
	std::cout << "Found " << palindromicNumbers.size() << " palindromic numbers: ";
	for (int i = 0; i < palindromicNumbers.size(); i++)
	{
		std::cout << palindromicNumbers[i] << " ";
	}
	std::cout << std::endl;

	PrimeNumber primen;
	primen.primeCheck(vt);
	std::vector<int> primeNumbers = primen.getPrimeNumbers();
	std::cout << "Found " << primeNumbers.size() << " prime numbers: ";
	for (int i = 0; i < primeNumbers.size(); i++)
	{
		std::cout << primeNumbers[i] << " ";
	}
	std::cout << std::endl;

	SquareNumber sn;
	sn.squareCheck(vt);
	std::vector<int> squareNumbers = sn.getSquareNumbers();
	std::cout << "Found " << squareNumbers.size() << " square numbers: ";
	for (int i = 0; i < squareNumbers.size(); i++)
	{
		std::cout << squareNumbers[i] << " ";
	}
	std::cout << std::endl;

	PerfectNumber perfn;
	perfn.perfectCheck(vt);
	std::vector<int> perfectNumbers = perfn.getPerfectNumbers();
	std::cout << "Found " << perfectNumbers.size() << " perfect numbers: ";
	for (int i = 0; i < perfectNumbers.size(); i++)
	{
		std::cout << perfectNumbers[i] << " ";
	}
	std::cout << std::endl;

	MinValue minv;
	minv.minCheck(vt);
	std::cout << "Minimum value: " << minv.getMin() << std::endl;

	MaxValue maxv;
	maxv.maxCheck(vt);
	std::cout << "Maximum value: " << maxv.getMax() << std::endl;

	AverageValue avgv;
	avgv.averageCheck(vt);
	std::cout << "Average value: " << avgv.getAverage() << std::endl;

	SumValue sumv;
	sumv.sumCheck(vt);
	std::cout << "Sum of all numbers: " << sumv.getSum() << std::endl;
}