#include "IntegerKeyboardProvider.h"
#include "PrimeNumber.h"

int main() 
{
	IntegerKeyboardProvider provider;
	std::vector<int> numbers = provider.next(10, 20);
	PrimeNumber primeNumber;
	primeNumber.primeCheck(numbers);

	std::cout << "Found " << primeNumber.primeNumbers.array.size() << " prime number(s): ";
	for (int i = 0; i < primeNumber.primeNumbers.array.size(); i++) 
	{
		std::cout << primeNumber.primeNumbers.array[i] << " ";
	}
	return 0;
}