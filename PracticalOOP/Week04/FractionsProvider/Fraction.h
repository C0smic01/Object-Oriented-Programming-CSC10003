#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
class Fraction {
private:
    int _num;
    int _den;
public:
    int getNumerator();
    int getDenominator();
public:
    Fraction(int num, int den);
    std::string toString();
};