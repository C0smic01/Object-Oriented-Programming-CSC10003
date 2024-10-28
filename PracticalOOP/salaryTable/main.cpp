#include "employeeProvider.h"
#include "Employee.h"
#include "tableConverter.h"
#include "Sort.h"
#include "sumSalary.h"

int main()
{
	auto employees = employeeProvider::read("salaryNov2024.txt");
	Sort::sort(employees);

	auto headers = std::vector<std::string>{"STT", "Ho va ten", "Luong"};
	auto columnSizes = std::vector<int>{ 3, 13, 13 };
    numberFormat format(".", 3);
	employeesToTableConverter converter(headers, columnSizes);

	auto info = converter.convert(employees);
	std::cout << info;

    std::cout << "Tong luong: " << sumSalary::sum(employees) << std::endl;
	return 0;
}