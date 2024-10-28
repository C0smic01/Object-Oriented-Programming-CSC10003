#pragma once
#include "University.h"
#include <vector>
#include <cctype>

class Sort
{
public:
    static int stringToInt(std::string str);
    static void sort(std::vector<University>& universities);
};