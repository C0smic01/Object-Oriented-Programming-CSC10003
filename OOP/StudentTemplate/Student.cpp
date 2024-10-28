#include "Student.h"
#include <iostream>
#include <string>

int Student::count = 0;

Student::Student(string name, float literatureGrade, float mathGrade)
{
    Student::name = name;
    Student::literatureGrade = literatureGrade;
    Student::mathGrade = mathGrade;
    Student::count++;
}

Student::Student(string name)
{
    Student::name = name;
    Student::literatureGrade = 0;
    Student::mathGrade = 0;
    Student::count++;
}

Student::Student(const Student &st)
{
    Student::name = st.name;
    Student::literatureGrade = st.literatureGrade;
    Student::mathGrade = st.mathGrade;
    Student::count++;
}

Student::~Student()
{
    Student::name = "";
    Student::literatureGrade = 0.0;
    Student::mathGrade = 0.0;
    Student::count--;
}

int Student::countStudent()
{
    return Student::count; 
}

void Student::Input()
{
    cout << "Enter name: ";
    getline(cin, Student::name);
    cout << "Enter literature grade: ";
    cin >> Student::literatureGrade;
    cout << "Enter math grade: ";
    cin >> Student::mathGrade;
}

void Student::Output()
{
    cout << "Name: " << Student::name << endl;
    cout << "Literature grade: " << Student::literatureGrade << endl;
    cout << "Math grade: " << Student::mathGrade << endl;
}

string Student::getName()
{
    return Student::name;
}

float Student::getLiteratureGrade()
{
    return Student::literatureGrade;
}

float Student::getMathGrade()
{
    return Student::mathGrade;
}

void Student::setName(string name)
{
    Student::name = name;
}

void Student::setLiteratureGrade(float literatureGrade)
{
    Student::literatureGrade = literatureGrade;
}

void Student::setMathGrade(float mathGrade)
{
    Student::mathGrade = mathGrade;
}

float Student::Average()
{
    return (Student::literatureGrade + Student::mathGrade) / 2;
}

string Student::Rank()
{
    if (Student::Average() >= 8.0)
    {
        return "Gioi";
    }
    else if (Student::Average() >= 7.0)
    {
        return "Kha";
    }
    else if (Student::Average() >= 5.0)
    {
        return "Trung binh";
    }
    else
    {
        return "Yeu";
    }
}