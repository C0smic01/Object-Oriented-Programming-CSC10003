#include "Fresher.h"
#include "FresherParser.h"
#include "Junior.h"
#include "JuniorParser.h"
#include "Senior.h"
#include "SeniorParser.h"
#include "DateParser.h"
#include "Date.h"
#include "TableConverter.h"
#include "EmployeeProvider.h"
#include "ParserFactory.h"
#include "Wrapper.h"
#include "SumPrice.h"

int main()
{
	// Change if needed
	ParserFactory factory;
	factory.registerWith(std::shared_ptr<FresherParser>(new FresherParser()));
	factory.registerWith(std::shared_ptr<JuniorParser>(new JuniorParser()));
	factory.registerWith(std::shared_ptr<SeniorParser>(new SeniorParser()));

	std::string filename = "May2024Proposals.txt"; // Change if needed
	std::vector<std::string> lines = EmployeeProvider::Read(filename);

	std::vector<std::shared_ptr<Employee>> employees;
	for (std::string line : lines)
	{
		int splitPosition = line.find("StartDate="),
			deduceSignPos = line.find("=>");

		// Extract date from line to know experience level of employee
		std::string rawDate = line.substr(splitPosition + 10, deduceSignPos - splitPosition - 10);
		Date date = DateParser::Parse(rawDate);
		std::string type = date.getLevel();
		std::shared_ptr<IParsable> parser = factory.create(type);

		std::shared_ptr<Employee> employee = std::dynamic_pointer_cast<Employee>(parser->Parse(line));
		employees.push_back(employee);
	}

	auto headers = std::vector<std::string>{ "STT", "Nhan vien", "Tham nien", "Khoa hoc", "Chi phi", "Ho tro", "Thanh tien" }; // Change if needed
	auto columnSizes = std::vector<int>{ 3, 20, 15, 25, 12, 15, 15}; // Change if needed
	employeesToTableConverter converter(headers, columnSizes);

	auto table = converter.convert(employees);
	std::cout << table << std::endl;
	std::string formatted = SumPrice::Format(employees);
	std::cout << "Tong tien tai tro: " << formatted << std::endl;

	return 0;
}