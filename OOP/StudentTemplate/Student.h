#include <iostream>
#include <string>
#pragma once
using namespace std;
class Student
{
    private:
        static int count;
        string name;
        float literatureGrade, mathGrade;
    public:
        Student(string name, float literatureGrade, float mathGrade);
        Student(string name);
        Student(const Student &st);
        ~Student();
        int countStudent();
        void Input();
        void Output();
        string getName();
        float getLiteratureGrade();
        float getMathGrade();
        void setName(string name);
        void setLiteratureGrade(float literatureGrade);
        void setMathGrade(float mathGrade);
        float Average();
        string Rank();
};