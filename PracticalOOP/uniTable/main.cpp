#include "uniProvider.h"
#include "University.h"
#include "tableConverter.h"
#include "Sort.h"
#include <iostream>

int main()
{
    auto uniProvider = uniProvider::read("UniversitiesRankings.csv");
    Sort::sort(uniProvider);

    auto headers = std::vector<std::string>{"STT", "Ten truong", "Hoc phi"};
    auto columnSizes = std::vector<int>{3, 50, 10};
    UniversitiesToTableConverter converter(headers, columnSizes);

    // Print the first 10 universities (limiter can be changed to print more or less universities)
    auto info = converter.convert(uniProvider, 10);
    std::cout << info;
    return 0;
}