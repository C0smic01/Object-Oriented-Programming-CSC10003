#include "Rectangle.h"

Rectangle::Rectangle()
{
	Rectangle::_width = 1;
	Rectangle::_height = 1;
}

Rectangle::Rectangle(int width, int height)
{
	Rectangle::_width = width;
	Rectangle::_height = height;
}

int Rectangle::getWidth()
{
	return Rectangle::_width;
}

int Rectangle::getHeight()
{
	return Rectangle::_height;
}

std::string Rectangle::toString()
{
	std::string rectangle = "Rectangle Width=" + std::to_string(Rectangle::_width) + ",Height=" + std::to_string(Rectangle::_height);
	return rectangle;
}