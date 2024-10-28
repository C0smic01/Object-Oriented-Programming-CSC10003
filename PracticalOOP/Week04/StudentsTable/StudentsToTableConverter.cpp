#include "StudentsToTableConverter.h"

int StudentsToTableConverter::StudentToRowConverter::index = 1;

StudentsToTableConverter::StudentsToTableConverter()
{
	_headers = {};
	_columnSizes = {};
}

StudentsToTableConverter::StudentsToTableConverter(std::vector<std::string> headers, std::vector<int> columnSizes)
{
	_headers = headers;
	_columnSizes = columnSizes;
}

std::string StudentsToTableConverter::convert(std::vector<Student> students)
{
	// Print headers
	std::ostringstream table;
	for (int i = 0; i < StudentsToTableConverter::_columnSizes.size(); i++)
	{
		table << "|" << std::setw(_columnSizes[i]) << std::right << _headers[i];
	}
	table << "|\n";

	// Print separator
	for (int i = 0; i < StudentsToTableConverter::_columnSizes.size(); i++)
	{
		table << "-" << std::string(_columnSizes[i], '-');
	}
	table << "-\n";

	// Print students
	for (auto student : students)
	{
		StudentToRowConverter rowConverter(_columnSizes);
		table << rowConverter.convert(student);
	}

	return table.str();
}

StudentsToTableConverter::StudentToRowConverter::StudentToRowConverter()
{
	_columnSizes = {};
}

StudentsToTableConverter::StudentToRowConverter::StudentToRowConverter(std::vector<int> columnSizes)
{
	_columnSizes = columnSizes;
}

std::string StudentsToTableConverter::StudentToRowConverter::convert(Student student)
{
	auto attributes = std::vector<std::string>{std::to_string(index), student._id, student._fullname, student._email};
	index++;
	std::ostringstream row;

	for (int i = 0; i < StudentsToTableConverter::StudentToRowConverter::_columnSizes.size(); i++)
	{
		row << "|" << std::setw(_columnSizes[i]) << std::right << attributes[i];
	}
	row << "|\n";
	return row.str();
}