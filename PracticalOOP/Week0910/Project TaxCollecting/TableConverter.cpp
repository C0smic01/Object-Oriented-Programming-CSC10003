#include "TableConverter.h"

int boothsToTableConverter::boothToRowConverter::index = 1;

boothsToTableConverter::boothsToTableConverter(std::vector<std::string> headers, std::vector<int> columnSizes)
{
	boothsToTableConverter::_headers = headers;
	boothsToTableConverter::_columnSizes = columnSizes;
}

std::string boothsToTableConverter::convert(std::vector<std::shared_ptr<Booth>> projects)
{
	// Print headers
	std::ostringstream table;
	for (int i = 0; i < boothsToTableConverter::_columnSizes.size(); i++)
	{
		table << "|" << std::setw(_columnSizes[i]) << std::left << _headers[i];
	}
	table << "|\n";

	// Print separator
	for (int i = 0; i < boothsToTableConverter::_columnSizes.size(); i++)
	{
		table << "-" << std::string(_columnSizes[i], '-');
	}
	table << "-\n";

	// Print universities
	for (int i = 0; i < projects.size(); i++)
	{
		boothToRowConverter rowConverter(_columnSizes);
		table << rowConverter.convert(projects[i]);
	}

	return table.str();
}

boothsToTableConverter::boothToRowConverter::boothToRowConverter(std::vector<int> columnSizes)
{
    _columnSizes = columnSizes;
}

std::string boothsToTableConverter::boothToRowConverter::format(std::shared_ptr<Object> booth)
{
	IntegerToCurrencyConverter converter;
	std::string formatted = converter.convert(booth);
	return formatted;
}

std::string boothsToTableConverter::boothToRowConverter::convert(std::shared_ptr<Booth> booth)
{
	std::shared_ptr<Wrapper<int>> pricePerM2(new Wrapper<int>(booth->getPricePerM2()));
	std::shared_ptr<Wrapper<int>> rentPrice(new Wrapper<int>(booth->rentPrice()));
	std::shared_ptr<Wrapper<int>> fee(new Wrapper<int>(booth->getFee()));
	std::shared_ptr<Wrapper<int>> totalPrice(new Wrapper<int>(booth->totalPrice()));
	auto attributes = std::vector<std::string>{ std::to_string(index), booth->getID(), booth->toString(), std::to_string(booth->getArea()) + " m2", format(pricePerM2), format(rentPrice), format(fee), format(totalPrice)};
	index++;
	std::ostringstream row;

	// Print attributes
	for (int i = 0; i < boothsToTableConverter::boothToRowConverter::_columnSizes.size(); i++)
	{
		row << "|" << std::setw(_columnSizes[i]) << std::left << attributes[i];
	}
	row << "|\n";
	return row.str();
}