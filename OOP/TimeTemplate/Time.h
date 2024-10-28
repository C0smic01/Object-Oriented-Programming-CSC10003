#pragma once
#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
using namespace std;

class Time
{
    private:
    int hour, minute, second;

    public:
    // Assignment operator
    Time& operator=(const Time& t);

    // Constructor
    Time();
    Time(int hour, int minute, int second);
    Time(int second);
    Time(const Time &time);

    // Getter and setter 
    int getHour();
    int getMinute();
    int getSecond();
    int getAbsoluteSecond();
    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);
    void setAbsoluteSecond(int second);

    // Method
    int compareTime(Time time);
    Time durationTime(Time time);
    void addHour(int hour);
    void addMinute(int minute);
    void addSecond(int second);

    // Operator overloading
    bool operator>(Time time);
    bool operator<(Time time);
    bool operator==(Time time);
    bool operator>=(Time time);
    bool operator<=(Time time);
    bool operator!=(Time time);
    Time operator+=(int second);
    Time operator-=(int second);
    friend istream& operator>>(istream &in, Time &time);
    friend ostream& operator<<(ostream &out, Time time);

    // Prefix
    Time& operator++();
    Time& operator--();
    // Postfix
    Time operator++(int);
    Time operator--(int);
};