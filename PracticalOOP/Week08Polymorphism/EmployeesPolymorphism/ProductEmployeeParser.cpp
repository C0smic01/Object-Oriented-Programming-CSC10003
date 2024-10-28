#include "ProductEmployeeParser.h"

Object* ProductEmployeeParser::parse(std::string input)
{
	int equalSignPos1 = input.find('='); // Find the position of the equal sign
	int commaPos = input.find(','); // Find the position of the comma
	int equalSignPos2 = input.rfind('='); // Find the position of the second equal sign

	int productCount = std::stoi(input.substr(equalSignPos1 + 1, commaPos - equalSignPos1 - 1));
	int paymentPerProduct = std::stoi(input.substr(equalSignPos2 + 1));
	Object* productEmployee = new ProductEmployee(productCount, paymentPerProduct);
	return productEmployee;
}

std::string ProductEmployeeParser::parsedObjectName()
{
	return "ProductEmployee";
}