#pragma once
#include <iostream>
#include <vector>

class PrimeNumber
{
private:
	std::vector<int> primeNumbers;
public:
	void primeCheck(std::vector<int> vt);
	std::vector<int> getPrimeNumbers();
};