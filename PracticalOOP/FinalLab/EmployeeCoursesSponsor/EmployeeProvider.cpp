#include "EmployeeProvider.h"

std::vector<std::string> EmployeeProvider::Read(std::string filename)
{
	std::vector<std::string> result;
	std::fstream file(filename, std::ios::in);

	try
	{
		if (!file.good())
		{
			throw std::runtime_error("File not found");
		}

		std::cout << "Chuong trinh tai tro khoa hoc cho nhan vien 05/2024\nDang doc cac de nghi tu tap tin " << filename << std::endl;
		std::string temp = "",
			line = "";
		int counter = 0;

		// For every 2 lines in file, we concatenate them and push to result
		while (std::getline(file, temp))
		{
			if (temp == "")
			{
				continue;
			}
			line += temp;
			++counter;
			if (counter == 2)
			{
				result.push_back(line);
				line = "";
				counter = 0;
			}
		}
		std::cout << "Tim thay " << result.size() << " de nghi ho tro chi phi tham gia workshop" << std::endl << std::endl;
		return result;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		exit(1);
	}
}