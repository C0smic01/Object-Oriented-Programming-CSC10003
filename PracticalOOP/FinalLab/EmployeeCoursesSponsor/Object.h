#pragma once
#include <string>
#include <memory>
#include <map>
#include <iostream>

class Object
{
public:
	virtual std::string toString() = 0;
};