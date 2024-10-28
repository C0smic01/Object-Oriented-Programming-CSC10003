#pragma once
#include "Fresher.h"
#include "Senior.h"
#include "Junior.h"
#include "NumberFormatInfo.h"
#include "DoubleToCurrencyConverter.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <tuple>
#include <memory>

class employeesToTableConverter
{
private:
    std::vector<std::string> _headers;
    std::vector<int> _columnSizes;

public:
    employeesToTableConverter(std::vector<std::string> headers, std::vector<int> columnSizes);
    std::string convert(std::vector<std::shared_ptr<Employee>> employees);

private:
    class employeeToRowConverter
    {
    private:
        static int index;
        std::vector<int> _columnSizes;
    public:
        employeeToRowConverter(std::vector<int> columnSizes);
        std::string format(std::shared_ptr<Object> employee);
        std::string convert(std::shared_ptr<Employee> employee);
    };
};