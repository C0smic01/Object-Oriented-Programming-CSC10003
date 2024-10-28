#include "Date.h"

int main()
{
	int day = 0, month = 0, year = 0;
	cout << "Enter day, month and year: ";
	cin >> day >> month >> year;
	Date date(day, month, year);
	cout << date.getDay() << "-" << date.getMonth() << "-" << date.getYear() << endl;
	return 0;
}