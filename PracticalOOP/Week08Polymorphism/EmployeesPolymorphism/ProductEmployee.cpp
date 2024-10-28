#include "ProductEmployee.h"

ProductEmployee::ProductEmployee(int productCount, int paymentPerProduct)
{
	ProductEmployee::_productCount = productCount;
	ProductEmployee::_paymentPerProduct = paymentPerProduct;
}

int ProductEmployee::salary()
{
	int salaryTotal = ProductEmployee::_productCount * ProductEmployee::_paymentPerProduct;
	return salaryTotal;
}

std::string ProductEmployee::toString()
{
	std::string output = "Product employee";
	return output;
}