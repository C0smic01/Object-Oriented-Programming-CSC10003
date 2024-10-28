#include "Sort.h"


void Sort::sort(std::vector<Employee>& employees)
{
    for (int i = 0; i < employees.size() - 1; i++)
    {
        for (int j = i + 1; j < employees.size(); j++)
        {
            if (employees[i].getSalary() > employees[j].getSalary())
            {
                std::swap(employees[i], employees[j]);
            }
        }
    }
}