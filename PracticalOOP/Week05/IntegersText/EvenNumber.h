#pragma once
#include <iostream>
#include <vector>

class EvenNumber
{
private:
	std::vector<int> evenNumbers;
public:
	void evenCheck(std::vector<int> vt);
	std::vector<int> getEvenNumbers();
};