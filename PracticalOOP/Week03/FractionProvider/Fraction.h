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
    void setNumerator(int value);
    void setDenominator(int value);
public:
    Fraction();
    Fraction(int num, int den);
    std::string toString();
};