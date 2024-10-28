#pragma once
#include "RandomInteger.h"
#include "DynamicArray.h"
#include <iostream>
#pragma warning(disable:4996)

class IntegerKeyboardProvider 
{
public:
	static std::vector<int> next();
	static std::vector<int> next(int min, int max);
};