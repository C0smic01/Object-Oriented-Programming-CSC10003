#pragma once
#include "Polygon.h"

class Rectangle : public Polygon
{
private:
    Vertex v1, v2;
public:
    Rectangle(Vertex v1, Vertex v2);
    void GetInfo() override;
};