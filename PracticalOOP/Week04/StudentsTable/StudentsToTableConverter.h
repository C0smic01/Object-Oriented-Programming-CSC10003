#pragma once
#include "Student.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <tuple>

class StudentsToTableConverter
{
private:
    std::vector<std::string> _headers;
    std::vector<int> _columnSizes;
public:
    StudentsToTableConverter();
    StudentsToTableConverter(std::vector<std::string> headers, std::vector<int> columnSizes);
    std::string convert(std::vector<Student> students);

private: // Inner class
    class StudentToRowConverter
    {
    private:
        static int index;
        std::vector<int> _columnSizes;
    public:
        StudentToRowConverter();
        StudentToRowConverter(std::vector<int> columnSizes);
        std::string convert(Student student);
    };
};