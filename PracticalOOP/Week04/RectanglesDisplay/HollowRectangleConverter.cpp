#include "HollowRectangleConverter.h"

HollowRectangleConverter::HollowRectangleConverter(std::string fill)
{
	HollowRectangleConverter::fill = fill;
}

std::string HollowRectangleConverter::convert(Rectangle info)
{
	std::string result = "";
	for (int i = 0; i < info.getWidth(); i++)
	{
		for (int j = 0; j < info.getHeight(); j++)
		{
			if (i == 0 || i == info.getWidth() - 1 || j == 0 || j == info.getHeight() - 1)
			{
				result += fill;
			}
			else
			{
				result += " ";
			}
		}
		result += "\n";
	}
	return result;
}
