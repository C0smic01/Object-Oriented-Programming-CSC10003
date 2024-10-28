#pragma once
#include "Object.h"

template<class type>
class Wrapper : public Object
{
private:
	type _value;
public:
	Wrapper(type value)
	{
		Wrapper::_value = value;
	}
	type value()
	{
		return _value;
	}
	std::string toString() 
	{
		return "";
	};
};
