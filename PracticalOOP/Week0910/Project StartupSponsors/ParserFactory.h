#pragma once
#include "Object.h"
#include "IParsable.h"

class ParserFactory : public Object
{
private:
	std::map<std::string, std::shared_ptr<IParsable>> _container;
public:
	void registerWith(std::shared_ptr<IParsable> parser);
	std::shared_ptr<IParsable> create(std::string type);
	std::string toString() override;
};