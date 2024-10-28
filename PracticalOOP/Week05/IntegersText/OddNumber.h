#pragma once
#include <iostream>
#include <vector>

class OddNumber
{
private:
	std::vector<int> oddNumbers;
public:
	void oddCheck(std::vector<int> vt);
	std::vector<int> getOddNumbers();
};