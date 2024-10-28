#pragma once
#include <string>

class Student 
{
public:
    std::string _id;
    std::string _fullname;
    std::string _email;
public:
    Student();
    Student(std::string id, std::string fullname, std::string email);
};