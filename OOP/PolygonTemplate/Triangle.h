#pragma once
#include "Polygon.h"

class Triangle : public Polygon
{
private:
    Vertex v1, v2, v3;
public:
    Triangle(Vertex v1, Vertex v2, Vertex v3);
    void GetInfo() override;
};