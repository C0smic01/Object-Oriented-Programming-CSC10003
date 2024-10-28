#include "FractionsProvider.h"

std::vector<Fraction> FractionsProvider::read(std::string filename)
{
	int n = 0;
	std::vector<Fraction> result;
	std::fstream file(filename, std::ios::in);

	if (file.good())
	{
		file >> n;
		file.ignore();
		while (!file.eof())
		{
			std::string frac = "";
			std::getline(file, frac);
			int pos = frac.find('/');
			int num = std::stoi(frac.substr(0, pos));
			int den = std::stoi(frac.substr(pos + 1));
			Fraction f(num, den);
			result.push_back(f);
		}
	}
	return result;
}