#pragma once
#include <string>

class Rectangle {
private:
    int _width;
    int _height;
public:
    Rectangle();
    Rectangle(int width, int height);
    int getWidth();
    int getHeight();
    std::string toString();
};