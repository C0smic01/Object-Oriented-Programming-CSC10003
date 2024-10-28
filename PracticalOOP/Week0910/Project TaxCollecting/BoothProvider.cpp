#include "BoothProvider.h"

std::vector<std::string> BoothProvider::read(std::string filename)
{
	std::vector<std::string> result;
	std::fstream file(filename, std::ios::in);

	try
	{
		if (!file.good())
		{
			throw std::runtime_error("File not found");
		}

		std::cout << "Bao cao thu tien thue mat bang cho Ben Thanh\nThang: 05/2024" << std::endl << std:: endl;
		std::string line = "";
		while (std::getline(file, line))
		{
			result.push_back(line);
		}
		return result;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}