#include "Rectangle.h"

Rectangle::Rectangle(Vertex v1, Vertex v2)
{
    Rectangle::v1 = v1;
    Rectangle::v2 = v2;
}

void Rectangle::GetInfo()
{
    std::cout << "Rectangle with vertices: (" << v1.x << ", " << v1.y << "), (" << v2.x << ", " << v2.y << ")" << std::endl;
}