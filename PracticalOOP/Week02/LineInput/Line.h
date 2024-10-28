#pragma once
#include <iostream>
using namespace std;

class Line
{
private:
	float _x1, _y1, _x2, _y2;
public:
	Line(float x1, float y1, float x2, float y2);
	float getX1();
	float getY1();
	float getX2();
	float getY2();
};