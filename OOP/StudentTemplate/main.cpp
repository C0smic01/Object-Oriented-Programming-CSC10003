#include "Student.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    Student st1("Quang", 8, 9);
    st1.Output();
    cout << "Average: " << st1.Average() << endl;
    cout << "Rank: " << st1.Rank() << endl;
    cout << endl;

    Student st2("Trung");
    st2.Output();
    st2.Input();
    st2.Output();
    cout << endl;

    Student st3(st1);
    st3.Output();
    cout << endl;

    Student st4("Nguyen", 7, 6);
    string name = st4.getName();
    float litGrade = st4.getLiteratureGrade();
    float mathGrade = st4.getMathGrade();
    cout << "Name: " << name << endl;
    cout << "Literature grade: " << litGrade << endl;
    cout << "Math grade: " << mathGrade << endl;
    st4.setName("Hue");
    st4.setLiteratureGrade(8);
    st4.setMathGrade(9);
    st4.Output();
    cout << endl;

    cout << st4.countStudent();
    return 0;
}