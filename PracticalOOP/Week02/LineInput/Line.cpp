#include "Line.h"

Line::Line(float x1, float y1, float x2, float y2)
{
	Line::_x1 = x1;
	Line::_y1 = y1;
	Line::_x2 = x2;
	Line::_y2 = y2;
}

float Line::getX1()
{
	return Line::_x1;
}

float Line::getY1()
{
	return Line::_y1;
}

float Line::getX2()
{
	return Line::_x2;
}

float Line::getY2()
{
	return Line::_y2;
}