#pragma once
#include "University.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <tuple>

class UniversitiesToTableConverter
{
private:
    std::vector<std::string> _headers;
    std::vector<int> _columnSizes;
public:
    UniversitiesToTableConverter(std::vector<std::string> headers, std::vector<int> columnSizes);
    std::string convert(std::vector<University> universities, int limiter);

private: // Inner class
    class UniversityToRowConverter
    {
    private:
        static int index;
        std::vector<int> _columnSizes;
    public:
        UniversityToRowConverter(std::vector<int> columnSizes);
        std::string convert(University university);
    };
};