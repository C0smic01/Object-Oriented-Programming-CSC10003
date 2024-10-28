#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

class EmployeeProvider
{
public:
	static std::vector<std::string> Read(std::string filename);
};