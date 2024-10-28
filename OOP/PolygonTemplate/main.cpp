#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include <vector>

int main()
{
    std::vector<Polygon*> dsHinh;
    dsHinh.push_back(new Rectangle({0, 0}, {1, 1}));
    dsHinh.push_back(new Triangle({0, 0}, {1, 1}, {2, 2}));
    dsHinh.push_back(new Circle({0, 0}, 1));
    dsHinh.push_back(new Rectangle({1.4, 2.3}, {3, -2.5}));

    for (int i = 0; i < dsHinh.size(); i++)
    {
        dsHinh[i]->GetInfo();
    }

    for (int i = 0; i < dsHinh.size(); i++)
    {
        delete dsHinh[i];
    }

    return 0;
}