#include "premiumTheatre.h"

float premiumTheatre::discountRate = 0.2;

premiumTheatre::premiumTheatre():normalTheatre()
{
    premiumTheatre::midRowPrice = 120000;
}

premiumTheatre::premiumTheatre(int rows, int cols):normalTheatre(rows, cols)
{
    premiumTheatre::midRowPrice = 120000;
}

int premiumTheatre::getPrice(int row, int col)
{
    // If it's Thursday, apply discount
    time_t now = time(0);
    tm *ltm = localtime(&now);
    if (ltm->tm_wday == 4)
    {
        return normalTheatre::getPrice(row, col) * (1 - premiumTheatre::discountRate);
    }
    return normalTheatre::getPrice(row, col);
}

