#include "RandomInteger.h"

RandomInteger::RandomInteger(){}

int RandomInteger::next()
{
	srand(time(NULL));
	return rand();
}

int RandomInteger::next(int max)
{
	srand(time(NULL));
	return rand() % max;
}

int RandomInteger::next(int min, int max)
{
	srand(time(NULL));
	return rand() % (max - min + 1) + min;
}