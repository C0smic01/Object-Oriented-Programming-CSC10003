#include "employeeProvider.h"

std::vector<Employee> employeeProvider::read(std::string filename)
{
	std::vector<Employee> result;
	std::fstream file(filename, std::ios::in);

    if (file.good())
    {
        std::cout << "Dang doc file salaryNov2024.txt" << std::endl;
        std::string line = "";
        std::getline(file, line);

        while (std::getline(file, line))
        {
            std::stringstream ss(line);
            std::string token = "";
            std::vector<std::string> tokens;

            while (std::getline(ss, token, ','))
            {
                tokens.push_back(token);
            }
            result.push_back(Employee(tokens[0], std::stoi(tokens[1]), std::stoi(tokens[2])));
        }
        std::cout << "Tim thay: " << result.size() << " nhan vien quan li" << std::endl;
        std::cout << std::endl;
    }
    file.close();
    return result;
}