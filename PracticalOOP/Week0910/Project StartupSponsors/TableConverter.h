#pragma once
#include "Mvp.h"
#include "Idea.h"
#include "NumberFormatInfo.h"
#include "IntegerToCurrencyConverter.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <tuple>
#include <memory>

class projectsToTableConverter
{
private:
    std::vector<std::string> _headers;
    std::vector<int> _columnSizes;

public:
    projectsToTableConverter(std::vector<std::string> headers, std::vector<int> columnSizes);
    std::string convert(std::vector<std::shared_ptr<Project>> projects);

private:
    class projectToRowConverter
    {
    private:
        static int index;
        std::vector<int> _columnSizes;
    public:
        projectToRowConverter(std::vector<int> columnSizes);
        std::string format(std::shared_ptr<Object> project);
        std::string convert(std::shared_ptr<Project> project);
    };
};