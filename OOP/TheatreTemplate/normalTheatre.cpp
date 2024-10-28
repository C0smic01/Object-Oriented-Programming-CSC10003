#include "normalTheatre.h"

// Default constructor
normalTheatre::normalTheatre()
{
    normalTheatre::rows = 10;
    normalTheatre::cols = 10;
    normalTheatre::seats.resize(rows, std::vector<bool>(cols, true));
    normalTheatre::priceReduction = 3000;
    normalTheatre::midRowPrice = 80000;
}

// Parameterized constructor
normalTheatre::normalTheatre(int rows, int cols)
{
    normalTheatre::rows = rows;
    normalTheatre::cols = cols;
    normalTheatre::seats.resize(rows, std::vector<bool>(cols, true));
    normalTheatre::priceReduction = 3000;
    normalTheatre::midRowPrice = 80000;
}

// Check if seat is empty
bool normalTheatre::seatEmpty(int row, int col)
{
    return normalTheatre::seats[row][col];
}

int normalTheatre::getPrice(int row, int col)
{
    return normalTheatre::midRowPrice - normalTheatre::priceReduction * abs(row - normalTheatre::rows / 2);
}

bool normalTheatre::bookSeat(int row, int col)
{
    if (normalTheatre::seats[row][col])
    {
        normalTheatre::seats[row][col] = false;
        return true;
    }
    return false;
}

// Sum price of all booked seats
int normalTheatre::sumPrice()
{
    int sum = 0;
    for (int i = 0; i < normalTheatre::rows; i++)
    {
        for (int j = 0; j < normalTheatre::cols; j++)
        {
            if (!normalTheatre::seats[i][j])
            {
                sum += normalTheatre::getPrice(i, j);
            }
        }
    }
    return sum;
}