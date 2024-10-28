#include "tableConverter.h"

int UniversitiesToTableConverter::UniversityToRowConverter::index = 1;

UniversitiesToTableConverter::UniversitiesToTableConverter(std::vector<std::string> headers, std::vector<int> columnSizes)
{
    _headers = headers;
    _columnSizes = columnSizes;
}

std::string UniversitiesToTableConverter::convert(std::vector<University> universities, int limiter)
{
	// Print headers
	std::ostringstream table;
	for (int i = 0; i < UniversitiesToTableConverter::_columnSizes.size(); i++)
	{
		table << "|" << std::setw(_columnSizes[i]) << std::left << _headers[i];
	}
	table << "|\n";

	// Print separator
	for (int i = 0; i < UniversitiesToTableConverter::_columnSizes.size(); i++)
	{
		table << "-" << std::string(_columnSizes[i], '-');
	}
	table << "-\n";

	// Print universities
	for (int i = 0; i < universities.size() && i < limiter; i++)
	{
		UniversityToRowConverter rowConverter(_columnSizes);
		table << rowConverter.convert(universities[i]);
	}

	return table.str();
}

UniversitiesToTableConverter::UniversityToRowConverter::UniversityToRowConverter(std::vector<int> columnSizes)
{
    _columnSizes = columnSizes;
}

std::string UniversitiesToTableConverter::UniversityToRowConverter::convert(University university)
{
	auto attributes = std::vector<std::string>{std::to_string(index), university.getName(), university.getTuition()};
	index++;
	std::ostringstream row;

	// Print attributes
	for (int i = 0; i < UniversitiesToTableConverter::UniversityToRowConverter::_columnSizes.size(); i++)
	{
		row << "|" << std::setw(_columnSizes[i]) << std::left << attributes[i];
	}
	row << "|\n";
	return row.str();
}