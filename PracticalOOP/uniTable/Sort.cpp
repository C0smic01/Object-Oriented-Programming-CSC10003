#include "Sort.h"

int Sort::stringToInt(std::string str)
{
    std::string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ',' && isdigit(str[i]))
        {
            temp += str[i];
        }
    }
    return std::stoi(temp);
}

void Sort::sort(std::vector<University>& universities)
{
    for (int i = 0; i < universities.size() - 1; i++)
    {
        for (int j = i + 1; j < universities.size(); j++)
        {
            if (stringToInt(universities[i].getTuition()) < stringToInt(universities[j].getTuition()))
            {
                std::swap(universities[i], universities[j]);
            }
        }
    }
}