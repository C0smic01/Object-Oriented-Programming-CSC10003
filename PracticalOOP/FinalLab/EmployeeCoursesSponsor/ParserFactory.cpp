#include "ParserFactory.h"

void ParserFactory::registerWith(std::shared_ptr<IParsable> parser)
{
	_container.insert({parser->parsedObjectName(), parser});
}

std::shared_ptr<IParsable> ParserFactory::create(std::string type)
{
	return _container[type];
}