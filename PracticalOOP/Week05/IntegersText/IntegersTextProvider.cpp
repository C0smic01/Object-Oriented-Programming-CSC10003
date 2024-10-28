#include "IntegersTextProvider.h"

std::vector<int> IntegersTextProvider::read(std::string filename)
{
	int n = 0;
	std::vector<int> result;
	std::fstream file(filename, std::ios::in);

	if (file.good())
	{
		file >> n;
		while (!file.eof())
		{
			std::string buffer = "";
			file >> buffer;
			result.push_back(std::stoi(buffer));
		}
	}
	return result;
}