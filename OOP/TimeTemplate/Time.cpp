#include "Time.h"

Time &Time::operator=(const Time &t)
{
    this->hour = t.hour;
    this->minute = t.minute;
    this->second = t.second;
    return *this;
}

Time::Time()
{
    time_t t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    tm *now = std::localtime(&t);
    this->hour = now->tm_hour;
    this->minute = now->tm_min;
    this->second = now->tm_sec;
}

Time::Time(int hour, int minute, int second)
{
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

Time::Time(int second)
{
    this->hour = second / 3600;
    this->minute = (second % 3600) / 60;
    this->second = second % 60;
}

Time::Time(const Time &time)
{
    this->hour = time.hour;
    this->minute = time.minute;
    this->second = time.second;
}

int Time::getHour()
{
    return this->hour;
}

int Time::getMinute()
{
    return this->minute;
}

int Time::getSecond()
{
    return this->second;
}

int Time::getAbsoluteSecond()
{
    return this->hour * 3600 + this->minute * 60 + this->second;
}

void Time::setHour(int hour)
{
    this->hour = hour;
}

void Time::setMinute(int minute)
{
    this->minute = minute;
}

void Time::setSecond(int second)
{
    this->second = second;
}

void Time::setAbsoluteSecond(int second)
{
    this->hour = second / 3600;
    this->minute = (second % 3600) / 60;
    this->second = second % 60;
}

int Time::compareTime(Time time)
{
    if (this->getAbsoluteSecond() < time.getAbsoluteSecond())
    {
        return -1;
    }
    else if (this->getAbsoluteSecond() > time.getAbsoluteSecond())
    {
        return 1;
    }
    else return 0;
}

Time Time::durationTime(Time time)
{
    return Time(abs(this->getAbsoluteSecond() - time.getAbsoluteSecond()));
}

void Time::addHour(int hour)
{
    this->hour += hour;
}

void Time::addMinute(int minute)
{
    this->minute += minute;
    if (this->minute >= 60)
    {
        this->addHour(this->minute % 60);
        this->minute = this->minute - this->minute % 60;
    }
    else if (this->minute < 0)
    {
        this->addHour(this->minute / 60 - 1);
        this->minute = 60 + this->minute % 60;
    }
}

void Time::addSecond(int second)
{
    this->second += second;
    if (this->second >= 60)
    {
        this->addMinute(this->second % 60);
        this->second = this->second - this->second % 60;
    }
    else if (this->second < 0)
    {
        this->addMinute(this->second / 60 - 1);
        this->second = 60 + this->second % 60;
    }
}

bool Time::operator>(Time time)
{
    if (this->compareTime(time) == 1)
    {
        return true;
    }
    return false;
}

bool Time::operator<(Time time)
{
    if (this->compareTime(time) == -1)
    {
        return true;
    }
    return false;
}

bool Time::operator==(Time time)
{
    if (this->compareTime(time) == 0)
    {
        return true;
    }
    return false;
}

bool Time::operator>=(Time time)
{
    if (this->compareTime(time) == 0 || this->compareTime(time) == 1)
    {
        return true;
    }
    return false;
}

bool Time::operator<=(Time time)
{
    if (this->compareTime(time) == 0 || this->compareTime(time) == -1)
    {
        return true;
    }
    return false;
}

bool Time::operator!=(Time time)
{
    if (this->compareTime(time) == 1 || this->compareTime(time) == -1)
    {
        return true;
    }
    return false;
}

Time Time::operator+=(int second)
{
    Time temp = *this;
    this->addSecond(second);
    return temp;
}

Time Time::operator-=(int second)
{
    Time temp = *this;
    this->addSecond(-second);
    return temp;
}

istream& operator>>(istream &in, Time &time)
{
    char colon1, colon2;
    in >> time.hour >> colon1 >> time.minute >> colon2 >> time.second;
    return in;
}

ostream& operator<<(ostream &out, Time time)
{
    out << time.hour << ":" << time.minute << ":" << time.second;
    return out;
}

Time& Time::operator++()
{
    this->addSecond(1);
    return *this;
}

Time& Time::operator--()
{
    this->addSecond(-1);
    return *this;
}

Time Time::operator++(int)
{
    Time temp = *this;
    this->addSecond(1);
    return temp;
}

Time Time::operator--(int)
{
    Time temp = *this;
    this->addSecond(-1);
    return temp;
}