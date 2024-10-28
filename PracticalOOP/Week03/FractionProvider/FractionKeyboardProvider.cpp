#include "FractionKeyboardProvider.h"

std::tuple<int, int> fractionSplit(std::string fraction)
{
    std::string delimiter = "/";
    int pos = fraction.find(delimiter);

    int num = std::stoi(fraction.substr(0, pos)),
        den = std::stoi(fraction.substr(pos + 1, fraction.length()));

	return std::make_tuple(num, den);
}

Fraction FractionKeyboardProvider::next()
{
    std::regex fractionPattern("^-?\\d+/\\d+$");
    std::string fraction = "";

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
                return result;
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
