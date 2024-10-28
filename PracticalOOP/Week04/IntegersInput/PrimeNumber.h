#pragma once
#include <iostream>
#include "DynamicArray.h"

class PrimeNumber
{
public:
	DynamicArray<int> primeNumbers;
	void primeCheck(std::vector<int> vt);
};