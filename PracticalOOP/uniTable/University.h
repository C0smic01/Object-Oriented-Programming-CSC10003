#pragma once
#include <iostream>
#include <string>

class University
{
private:
    std::string _name, _tuition;
public:
    University(std::string name, std::string tuition);
    std::string getName();
    std::string getTuition();
};