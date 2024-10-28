#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Fraction.h"

class FractionsProvider
{
public:
	static std::vector<Fraction> read(std::string filename);
};