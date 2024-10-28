#include "tableConverter.h"

int employeesToTableConverter::employeeToRowConverter::index = 1;
numberFormat employeesToTableConverter::_format(".", 3);
employeesToTableConverter::employeesToTableConverter(std::vector<std::string> headers, std::vector<int> columnSizes)
{
	_headers = headers;
	_columnSizes = columnSizes;
}

std::string employeesToTableConverter::convert(std::vector<Employee> employees)
{
	// Print headers
	std::ostringstream table;
	for (int i = 0; i < employeesToTableConverter::_columnSizes.size(); i++)
	{
		table << "|" << std::setw(_columnSizes[i]) << std::left << _headers[i];
	}
	table << "|\n";

	// Print separator
	for (int i = 0; i < employeesToTableConverter::_columnSizes.size(); i++)
	{
		table << "-" << std::string(_columnSizes[i], '-');
	}
	table << "-\n";

	// Print universities
	for (int i = 0; i < employees.size(); i++)
	{
		employeeToRowConverter rowConverter(_columnSizes);
		table << rowConverter.convert(employees[i]);
	}

	return table.str();
}

employeesToTableConverter::employeeToRowConverter::employeeToRowConverter(std::vector<int> columnSizes)
{
    _columnSizes = columnSizes;
}

std::string employeesToTableConverter::employeeToRowConverter::format(int number)
{
	std::string thousandSeperator = employeesToTableConverter::_format.getThousandSeparator();
	int precision = _format.getPrecision();
	std::string result = std::to_string(number);

	for (int i = result.size() - 3; i > 0; i -= 3)
	{
		result.insert(i, thousandSeperator);
	}
	return result;
}

std::string employeesToTableConverter::employeeToRowConverter::convert(Employee employee)
{
	auto attributes = std::vector<std::string>{std::to_string(index), employee.getName(), format(employee.getSalary())};
	index++;
	std::ostringstream row;

	// Print attributes
	for (int i = 0; i < employeesToTableConverter::employeeToRowConverter::_columnSizes.size(); i++)
	{
		row << "|" << std::setw(_columnSizes[i]) << std::left << attributes[i];
	}
	row << "|\n";
	return row.str();
}