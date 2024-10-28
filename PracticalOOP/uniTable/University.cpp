#include "University.h"

University::University(std::string name, std::string tuition)
{
    this->_name = name;
    this->_tuition = tuition;
}

std::string University::getName()
{
    return this->_name;
}

std::string University::getTuition()
{
    return this->_tuition;
}