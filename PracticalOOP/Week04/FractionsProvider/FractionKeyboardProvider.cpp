#include "FractionKeyboardProvider.h"

std::tuple<int, int> fractionSplit(std::string fraction)
{
    std::string delimiter = "/";
    int pos = fraction.find(delimiter);

    int num = std::stoi(fraction.substr(0, pos)),
        den = std::stoi(fraction.substr(pos + 1, fraction.length()));

	return std::make_tuple(num, den);
}

std::vector<Fraction> FractionKeyboardProvider::next(int min, int max)
{
    RandomInteger provider;
    int n = provider.next(min, max);
    DynamicArray<Fraction> da;
    std::regex fractionPattern("^-?\\d+/\\d+$");
    std::string fraction = "";

    std::cout << "Please enter " << n << " fractions from the keyboard" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Fraction " << i + 1 << ": ";
        while (true)
        {
            try
            {
                std::getline(std::cin, fraction);

                if (std::regex_match(fraction, fractionPattern))
                {
                    std::tuple<int, int> frac = fractionSplit(fraction);
                    if (std::get<1>(frac) == 0)
                    {
                        throw "Denominator cannot be zero.";
                    }
                    Fraction result(std::get<0>(frac), std::get<1>(frac));
                    da.array.push_back(result);
                    break;
                }
                else if (fraction == "")
                {
                    throw "Empty input is not allowed.";
                }
                else
                {
                    throw "Invalid fraction format.";
                }
            }
            catch (const char* msg)
            {
                std::cin.clear();
                fraction = "";
                std::cout << msg << " Try again." << std::endl;
            }
        }
    }
    return da.array;
}
