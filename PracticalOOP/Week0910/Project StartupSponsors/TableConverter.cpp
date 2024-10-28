#include "TableConverter.h"

int projectsToTableConverter::projectToRowConverter::index = 1;

projectsToTableConverter::projectsToTableConverter(std::vector<std::string> headers, std::vector<int> columnSizes)
{
	projectsToTableConverter::_headers = headers;
	projectsToTableConverter::_columnSizes = columnSizes;
}

std::string projectsToTableConverter::convert(std::vector<std::shared_ptr<Project>> projects)
{
	// Print headers
	std::ostringstream table;
	for (int i = 0; i < projectsToTableConverter::_columnSizes.size(); i++)
	{
		table << "|" << std::setw(_columnSizes[i]) << std::left << _headers[i];
	}
	table << "|\n";

	// Print separator
	for (int i = 0; i < projectsToTableConverter::_columnSizes.size(); i++)
	{
		table << "-" << std::string(_columnSizes[i], '-');
	}
	table << "-\n";

	// Print universities
	for (int i = 0; i < projects.size(); i++)
	{
		projectToRowConverter rowConverter(_columnSizes);
		table << rowConverter.convert(projects[i]);
	}

	return table.str();
}

projectsToTableConverter::projectToRowConverter::projectToRowConverter(std::vector<int> columnSizes)
{
    _columnSizes = columnSizes;
}

std::string projectsToTableConverter::projectToRowConverter::format(std::shared_ptr<Object> project)
{
	IntegerToCurrencyConverter converter;
	std::string formatted = converter.convert(project);
	return formatted;
}

std::string projectsToTableConverter::projectToRowConverter::convert(std::shared_ptr<Project> project)
{
	std::shared_ptr<Wrapper<int>> value(new Wrapper<int>(project->Sponsor()));
	auto attributes = std::vector<std::string>{ std::to_string(index), project->getProjectType(), project->getName(), project->toString(), format(value)};
	index++;
	std::ostringstream row;

	// Print attributes
	for (int i = 0; i < projectsToTableConverter::projectToRowConverter::_columnSizes.size(); i++)
	{
		row << "|" << std::setw(_columnSizes[i]) << std::left << attributes[i];
	}
	row << "|\n";
	return row.str();
}