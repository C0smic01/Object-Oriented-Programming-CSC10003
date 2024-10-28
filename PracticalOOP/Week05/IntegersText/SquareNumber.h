#pragma once
#include <iostream>
#include <vector>
#include <cmath>
class SquareNumber
{
private:
	std::vector<int> squareNumbers;
public:
	void squareCheck(std::vector<int> vt);
	std::vector<int> getSquareNumbers();
};