#include "TableConverter.h"

int employeesToTableConverter::employeeToRowConverter::index = 1;

employeesToTableConverter::employeesToTableConverter(std::vector<std::string> headers, std::vector<int> columnSizes)
{
	employeesToTableConverter::_headers = headers;
	employeesToTableConverter::_columnSizes = columnSizes;
}

std::string employeesToTableConverter::convert(std::vector<std::shared_ptr<Employee>> employees)
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

std::string employeesToTableConverter::employeeToRowConverter::format(std::shared_ptr<Object> employee)
{
	DoubleToCurrencyConverter converter;
	std::string formatted = converter.convert(employee);
	return formatted;
}

std::string employeesToTableConverter::employeeToRowConverter::convert(std::shared_ptr<Employee> employee)
{
	std::shared_ptr<Wrapper<double>> fullCost(new Wrapper<double>(employee->getFullCost()));
	std::shared_ptr<Wrapper<double>> price(new Wrapper<double>(employee->Price()));
	auto attributes = std::vector<std::string>{ std::to_string(index), employee->getName(), employee->toString(), employee->getCourse(), format(fullCost), std::to_string(employee->getDiscount()) + "%", format(price)};
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