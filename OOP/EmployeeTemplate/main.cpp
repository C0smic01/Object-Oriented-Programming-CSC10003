#include "Manager.h"
#include "Designer.h"
#include "Company.h"
#include "Programmer.h"
#include "Tester.h"
#include <iostream>

int main()
{
    Company company;
    company.addEmployee(new Designer("1", "Designer 1", "01/01/1990", "Hanoi", 100000, 1.5, "01/01/2020", 100));
    company.addEmployee(new Programmer("2", "Programmer 1", "01/01/1990", "Hanoi", 200000, 1.5, "01/01/2020", 100));
    company.addEmployee(new Tester("3", "Tester 1", "01/01/1990", "Hanoi", 300000, 1.5, "01/01/2020", 1));
    company.addEmployee(new Manager("4", "Manager 1", "01/01/1990", "Hanoi", 400000, 1.5, "01/01/2020", company.getList()));
    company.addEmployee(new Designer("5", "Designer 2", "01/01/1990", "Hanoi", 100000, 1.5, "01/01/2020", 100));
    company.addEmployee(new Programmer("6", "Programmer 2", "01/01/1990", "Hanoi", 200000, 1.5, "01/01/2020", 100));
    company.addEmployee(new Tester("7", "Tester 2", "01/01/1990", "Hanoi", 300000, 1.5, "01/01/2020", 1));
    company.addEmployee(new Designer("8", "Designer 3", "01/01/1990", "Hanoi", 100000, 1.5, "01/01/2020", 100));
    company.addEmployee(new Programmer("9", "Programmer 3", "01/01/1990", "Hanoi", 200000, 1.5, "01/01/2020", 100));
    company.addEmployee(new Tester("10", "Tester 3", "01/01/1990", "Hanoi", 300000, 1.5, "01/01/2020", 1));
    company.addEmployee(new Designer("11", "Designer 4", "01/01/1990", "Hanoi", 100000, 1.5, "01/01/2020", 100));
    company.addEmployee(new Manager("12", "Manager 2", "01/01/1990", "Hanoi", 400000, 1.5, "01/01/2020", company.getList()));
    company.addEmployee(new Manager("13", "Manager 3", "01/01/1990", "Hanoi", 400000, 1.5, "01/01/2020", company.getList()));
    
    company.printAll();
    std::cout << "Number of super managers(manager with more than 10 subordinates): " << company.countSuperManager() << std::endl;
    std::cout << "Total salary: " << company.getTotalSalary() << std::endl;
    return 0;
}