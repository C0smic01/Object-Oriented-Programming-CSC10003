#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "University.h"

class uniProvider
{
public:
    static std::vector<University> read(std::string filename);
};