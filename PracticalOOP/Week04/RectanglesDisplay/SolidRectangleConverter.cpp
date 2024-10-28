#include "SolidRectangleConverter.h"

SolidRectangleConverter::SolidRectangleConverter(std::string fill)
{
	SolidRectangleConverter::fill = fill;
}

std::string SolidRectangleConverter::convert(Rectangle info)
{
	std::string result = "";
	for (int i = 0; i < info.getWidth(); i++)
	{
		for (int j = 0; j < info.getHeight(); j++)
		{
			result += fill;
		}
		result += "\n";
	}
	return result;
}