#include <iostream>
#include "Fraction.h"
#include "FractionKeyboardProvider.h"
#include "NumberFormat.h"
#include "FractionToDecimalConverter.h"
#include "FractionToPercentageConverter.h"

int main()
{
    std::cout << "Nhap xuat phan so\n\n";

    std::cout << "Nhap vao mot phan so.\n";

    FractionKeyboardProvider provider;
    Fraction a = provider.next();

    std::cout << "\n";
    std::cout << "Phan so vua nhap la:" << a.toString() << std::endl;

    // Remove comments to test the conversion
    // Convert the fraction to a decimal
    Fraction f(10000, 6);
    NumberFormat format(",", ".", 3);
    FractionToDecimalConverter converter(format);
    std::string message = converter.convert(f);
    std::cout << message; // 1,666.666

    // Convert the fraction to a percentage
    /*Fraction f(100, 6);
    NumberFormat format(",", ".", 1);
    FractionToPercentageConverter converter(format);
    std::string message = converter.convert(f);
    std::cout << message; // 1,666.6%*/

    return 0;
}
