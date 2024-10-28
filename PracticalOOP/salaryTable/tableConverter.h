#pragma once
#include "Employee.h"
#include "numberFormat.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <tuple>

class employeesToTableConverter
{
private:
    std::vector<std::string> _headers;
    std::vector<int> _columnSizes;
    static numberFormat _format;

public:
    employeesToTableConverter(std::vector<std::string> headers, std::vector<int> columnSizes);
    std::string convert(std::vector<Employee> employees);

private:
    class employeeToRowConverter
    {
    private:
        static int index;
        std::vector<int> _columnSizes;
    public:
        employeeToRowConverter(std::vector<int> columnSizes);
        std::string format(int number);
        std::string convert(Employee triangle);
    };
};