#include "Product.h"

int main()
{
	string ID = "", name = "";
	float price = 0.0f;
	int day = 0, month = 0, year = 0;
	cout << "Enter ID: ";
	getline(cin, ID);
	cout << "Enter Name: ";
	getline(cin, name);
	cout << "Enter Price: ";
	cin >> price;
	cout << "Enter Expiry Date: ";
	cin >> day >> month >> year;
	Product product(ID, name, price, day, month, year);
	cout << "ID: " << product.getID() << endl;
	cout << "Name: " << product.getName() << endl;
	cout << "Price: " << product.getPrice() << endl;
	cout << "Expiry Date: " << product.getExpiryDate().getDay() << "-" << product.getExpiryDate().getMonth() << "-" << product.getExpiryDate().getYear() << endl;
	return 0;
}