#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <format>
#include "Employee.h"

class employeeProvider
{
public:
	static std::vector<Employee> read(std::string filename);
};