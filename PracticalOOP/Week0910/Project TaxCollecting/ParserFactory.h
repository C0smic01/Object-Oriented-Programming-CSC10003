#pragma once
#include <map>
#include <string>
#include "IParsable.h"

class ParserFactory
{
private:
	std::map<std::string, std::shared_ptr<IParsable>> _container;
public:
	void registerWith(std::shared_ptr<IParsable> parser);
	std::shared_ptr<IParsable> create(std::string type);
};