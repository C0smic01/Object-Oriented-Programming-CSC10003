#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class IntegersTextProvider 
{
public:
	static std::vector<int> read(std::string filename);
};