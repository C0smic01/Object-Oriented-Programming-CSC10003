#include "Student.h"
#include "StudentProvider.h"
#include "StudentsToTableConverter.h"
int main() 
{
    auto students = StudentProvider::getAll();

    std::vector<std::string> headers = { "STT", "MSSV", "Ho va ten", "Email" };
    std::vector<int> columnSizes = { 3, 4, 20, 20 };
    StudentsToTableConverter table(headers, columnSizes);

    auto info = table.convert(students);
    std::cout << info;

    return 0;
}