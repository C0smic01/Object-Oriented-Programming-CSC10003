#pragma once
#include <iostream>
#include <vector>

class PalindromicNumber
{
private:
	std::vector<int> palindromicNumbers;
public:
	void palindromicCheck(std::vector<int> vt);
	std::vector<int> getPalindromicNumbers();
};