#pragma once
#include <iostream>
#include <vector>

class PerfectNumber
{
private:
	std::vector<int> perfectNumbers;
public:
	void perfectCheck(std::vector<int> vt);
	std::vector<int> getPerfectNumbers();
};