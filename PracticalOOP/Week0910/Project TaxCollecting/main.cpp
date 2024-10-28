#include "Food.h"
#include "FoodParser.h"
#include "Jewelry.h"
#include "JewelryParser.h"
#include "Clothes.h"
#include "ClothesParser.h"
#include "TableConverter.h"
#include "BoothProvider.h"
#include "ParserFactory.h"
#include "Wrapper.h"
#include "SortAscending.h"
#include "SumPrice.h"

int main()
{
	// Change if needed
	ParserFactory factory;
	factory.registerWith(std::shared_ptr<FoodParser>(new FoodParser()));
	factory.registerWith(std::shared_ptr<JewelryParser>(new JewelryParser()));
	factory.registerWith(std::shared_ptr<ClothesParser>(new ClothesParser()));

	std::string filename = "RentMay24.txt"; // Change if needed
	std::vector<std::string> lines = BoothProvider::read(filename);

	std::vector<std::shared_ptr<Booth>> booths;
	for (std::string line : lines)
	{
		int splitPosition = line.find_first_of(" "); // Change if needed
		std::string type = line.substr(0, splitPosition);
		std::shared_ptr<IParsable> parser = factory.create(type);

		std::string data = line.substr(splitPosition + 1, line.length() - splitPosition - 1);
		std::shared_ptr<Booth> booth = std::dynamic_pointer_cast<Booth>(parser->Parse(data));
		booths.push_back(booth);
	}
	SortAscending::Sort(booths);

	auto headers = std::vector<std::string>{ "STT", "Ma sap", "Loai", "Dien tich", "Tien / m2", "Tien mat bang", "Phi khac", "Tong cong"}; // Change if needed
	auto columnSizes = std::vector<int>{ 3, 8, 15, 15, 15, 15, 15, 15 }; // Change if needed
	boothsToTableConverter converter(headers, columnSizes);

	auto table = converter.convert(booths);
	std::cout << table << std::endl;
	std::string formatted = SumPrice::Format(booths);
	std::cout << "Tong tien thue mat bang thu trong thang: " << formatted << std::endl;

	return 0;
}