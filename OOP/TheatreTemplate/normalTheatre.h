#pragma once
#include <iostream>
#include <vector>

class normalTheatre 
{
protected:
    std::vector<std::vector<bool>> seats;
    int rows, cols, priceReduction, midRowPrice;
public:
    normalTheatre();
    normalTheatre(int rows, int cols);
    bool seatEmpty(int row, int col);
    int getPrice(int row, int col);
    bool bookSeat(int row, int col);
    int sumPrice();
};