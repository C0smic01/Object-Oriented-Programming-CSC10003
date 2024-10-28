#include "sumSalary.h"

int sumSalary::sum(std::vector<Employee> employees)
{
    int sum = 0;
    for (int i = 0; i < employees.size(); i++)
    {
        sum += employees[i].getSalary();
    }
    return sum;
}