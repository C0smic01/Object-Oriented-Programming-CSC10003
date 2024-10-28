#include "Circle.h"

Circle::Circle(Vertex center, float radius)
{
    Circle::center = center;
    Circle::radius = radius;
}

void Circle::GetInfo()
{
    std::cout << "Circle with center at (" << center.x << ", " << center.y << ") and radius " << radius << std::endl;
}