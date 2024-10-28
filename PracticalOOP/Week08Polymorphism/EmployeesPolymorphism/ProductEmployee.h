#pragma once
#include "Employee.h"

class ProductEmployee : public Employee
{
private:
	int _productCount;
	int _paymentPerProduct;
public:
	ProductEmployee(int productCount, int paymentPerProduct);
	int salary() override;
	std::string toString() override;
};