#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#pragma warning(disable:4996)

class RandomInteger
{
public:
	RandomInteger();
public:
	int next();
	int next(int max);
	int next(int left, int right);
};