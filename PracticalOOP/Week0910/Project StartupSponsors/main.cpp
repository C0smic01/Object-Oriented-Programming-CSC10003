#include "Idea.h"
#include "IdeaParser.h"
#include "Mvp.h"
#include "MvpParser.h"
#include "TableConverter.h"
#include "ProjectProvider.h"
#include "ParserFactory.h"
#include "Wrapper.h"
#include "SortAscending.h"
#include "SumSponsor.h"

int main()
{
	ParserFactory factory;
	factory.registerWith(std::shared_ptr<IdeaParser>(new IdeaParser()));
	factory.registerWith(std::shared_ptr<MvpParser>(new MvpParser()));

	std::string filename = "MayProposals.txt";
	std::vector<std::string> lines = ProjectProvider::read(filename);

	std::vector<std::shared_ptr<Project>> projects;
	for (std::string line : lines)
	{
		int splitPosition = line.find_first_of(":");
		std::string type = line.substr(0, splitPosition); // type = "ProductEmployee" 
		std::shared_ptr<IParsable> parser = factory.create(type);

		std::string data = line.substr(splitPosition + 1, line.length() - splitPosition - 1);
		std::shared_ptr<Project> project = std::dynamic_pointer_cast<Project>(parser->Parse(data));
		projects.push_back(project);
	}
	SortAscending::Sort(projects);

	auto headers = std::vector<std::string>{ "STT", "Loai du an", "Ten du an", "Thong tin", "Kinh phi"};
	auto columnSizes = std::vector<int>{ 3, 12, 15, 50, 10};
	projectsToTableConverter converter(headers, columnSizes);

	auto table = converter.convert(projects);
	std::cout << table << std::endl;
	std::string formatted = SumSponsor::Format(projects);
	std::cout << "Tong kinh phi tai tro: " << formatted << std::endl;
	
	return 0;
}