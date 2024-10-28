#pragma once
#include "Fraction.h"
#include "RandomInteger.h"
#include "DynamicArray.h"
#include <regex>
#include <tuple>
#include <vector>

class FractionKeyboardProvider {
public:
    static std::vector<Fraction> next(int min, int max);
};