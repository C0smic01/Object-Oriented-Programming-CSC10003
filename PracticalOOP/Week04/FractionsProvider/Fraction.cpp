#include "Fraction.h"
#include <sstream>

int Fraction::getNumerator() {
    return _num;
}

int Fraction::getDenominator() {
    return _den;
}


Fraction::Fraction(int num, int den) {
    _num = num;
    _den = den;
}

std::string Fraction::toString()
{
    // Numerator is smaller than denominator
    if (this->getNumerator() < this->getDenominator())
    {
        int common = std::gcd(_num, _den);
        _num = _num / common;
        _den = _den / common;
        return std::to_string(_num) + "/" + std::to_string(_den);
    }

    // Denominator is divisible by numinator
    else if (this->getNumerator() % this->getDenominator() == 0)
    {
        return std::to_string(_num / _den);
    }

    // Mixed number
    else
    {
        int whole = _num / _den;
        int remainder = _num % _den;
        int common = std::gcd(remainder, _den);
        remainder = remainder / common;
        _den = _den / common;
        return std::to_string(whole) + " " + std::to_string(remainder) + "/" + std::to_string(_den);
    }
}