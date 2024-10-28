#pragma once
#include "Student.h"
#include <vector>
#include <string>

class StudentProvider 
{
public:
    static std::vector<Student> getAll();
};

