#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

class BoothProvider
{
public:
	static std::vector<std::string> read(std::string filename);
};