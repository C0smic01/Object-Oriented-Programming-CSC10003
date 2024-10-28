#include "Triangle.h"

Triangle::Triangle(Vertex v1, Vertex v2, Vertex v3)
{
    Triangle::v1 = v1;
    Triangle::v2 = v2;
    Triangle::v3 = v3;
}

void Triangle::GetInfo()
{
    std::cout << "Triangle with vertices: (" << v1.x << ", " << v1.y << "), (" << v2.x << ", " << v2.y << "), (" << v3.x << ", " << v3.y << ")" << std::endl;
}