#include "IntegerKeyboardProvider.h"

std::vector<int> IntegerKeyboardProvider::next()
{
	RandomInteger provider;
	int n = provider.next();
    DynamicArray<int> da;

	std::cout << "Please enter " << n << " integers in the range of[20, 100]" << std::endl;
	for (int i = 0; i < n; i++)
	{
        while (true)
        {
            int k = 0;
            try
            {
                std::cout << "Integer " << i + 1 << ": ";
                std::cin >> k;
                if (std::cin.fail())
                {
                    throw "Not a number";
                }
                else if (k < 20 || k > 100)
                {
                    throw "Out of range";
                }
                else
                {
                    da.array.push_back(k);
                    break;
                }
            }
            catch (const char* msg)
            {
                std::cin.clear();
                std::cin.ignore();
                std::cout << msg << std::endl;
            }
        }
	}
    return da.array;
}

std::vector<int> IntegerKeyboardProvider::next(int min, int max)
{
    RandomInteger provider;
    int n = provider.next(min, max);
    DynamicArray<int> da;

    std::cout << "Please enter " << n << " integers in the range of[20, 100]" << std::endl;
    for (int i = 0; i < n; i++)
    {
        while (true)
        {
            int k = 0;
            try
            {
                std::cout << "Integer " << i + 1<< ": ";
                std::cin >> k;
                if (std::cin.fail())
                {
                    throw "Not a number";
                }
                else if (k < 20 || k > 100)
                {
                    throw "Out of range";
                }
                else
                {
                    da.array.push_back(k);
                    break;
                }
            }
            catch (const char* msg)
            {
                std::cin.clear();
                std::cin.ignore();
                std::cout << msg << std::endl;
            }
        }
    }
    return da.array;
}
