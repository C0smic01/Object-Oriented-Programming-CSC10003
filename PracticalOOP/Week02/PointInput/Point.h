#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	float _x, _y;	
public:
	Point(float x, float y);
	float getX();
	float getY();
};