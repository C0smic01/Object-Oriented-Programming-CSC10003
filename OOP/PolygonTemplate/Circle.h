#pragma once
#include "Polygon.h"

class Circle : public Polygon
{
private:
    Vertex center;
    float radius;
public:
    Circle(Vertex center, float radius);
    void GetInfo() override;
};