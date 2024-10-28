#include "Point.h"

Point::Point(float x, float y) 
{
	Point::_x = x;
	Point::_y = y;
}

float Point::getX() 
{
	return Point::_x;
}

float Point::getY()
{
	return Point::_y;
}