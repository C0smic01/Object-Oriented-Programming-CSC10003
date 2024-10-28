#include "RectangleProvider.h"

std::vector<Rectangle> RectangleProvider::getAll() 
{
    std::vector<Rectangle> rectangles = {Rectangle(3, 4), Rectangle(4, 5), Rectangle(4, 8) };
    return rectangles;
}