#pragma once
#include <map>
#include <string>
#include "IParsable.h"

class ParserFactory
{
private:
	std::map<std::string, IParsable*> _container;
public:
	void registerWith(IParsable* parser);
	IParsable* create(std::string type);
};