#pragma once
#include "normalTheatre.h"
#include <ctime>

class premiumTheatre : public normalTheatre
{
private:
    static float discountRate;
public:
    premiumTheatre();
    premiumTheatre(int rows, int cols);
    int getPrice(int row, int col);
};