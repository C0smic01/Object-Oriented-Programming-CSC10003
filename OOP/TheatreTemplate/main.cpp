#include "normalTheatre.h"
#include "premiumTheatre.h"
#include <iostream>

int main()
{
    // Theatre will have 11x10 size
    while (true)
    {
        int choice1 = 0;
        std::cout << "1. Normal Theatre\n2. Premium Theatre\n3. Exit\n";
        std::cin >> choice1;
        if (choice1 == 1)
        {
            normalTheatre theatre(11, 10);
            while (true)
            {
                int choice2 = 0;
                std::cout << "1. Check if seat is empty\n2. Get seat's price\n3. Book seat\n4. Sum price\n5. Exit\n";
                std::cin >> choice2;
                if (choice2 == 1)
                {
                    int row = 0, col = 0;
                    std::cout << "Enter row and col: ";
                    std::cin >> row >> col;
                    if (theatre.seatEmpty(row - 1, col - 1))
                    {
                        std::cout << "Seat is empty\n";
                    }
                    else
                    {
                        std::cout << "Seat is not empty\n";
                    }
                }
                else if (choice2 == 2)
                {
                    int row = 0, col = 0;
                    std::cout << "Enter row and col: ";
                    std::cin >> row >> col;
                    std::cout << "Price: " << theatre.getPrice(row- 1, col - 1) << std::endl;
                }
                else if (choice2 == 3)
                {
                    int row = 0, col = 0;
                    std::cout << "Enter row and col: ";
                    std::cin >> row >> col;
                    if (theatre.bookSeat(row - 1, col - 1))
                    {
                        std::cout << "Seat booked\n";
                    }
                    else
                    {
                        std::cout << "Seat not booked\n";
                    }
                }
                else if (choice2 == 4)
                {
                    std::cout << "Sum price: " << theatre.sumPrice() << std::endl;
                }
                else if (choice2 == 5)
                {
                    break;
                }
            }
        }
        else if (choice1 == 2)
        {
            premiumTheatre theatre(11, 10);
            while (true)
            {
                int choice2 = 0;
                std::cout << "1. Check if seat is empty\n2. Get seat's price\n3. Book seat\n4. Sum price\n5. Exit\n";
                std::cin >> choice2;
                if (choice2 == 1)
                {
                    int row = 0, col = 0;
                    std::cout << "Enter row and col: ";
                    std::cin >> row >> col;
                    if (theatre.seatEmpty(row - 1, col - 1))
                    {
                        std::cout << "Seat is empty\n";
                    }
                    else
                    {
                        std::cout << "Seat is not empty\n";
                    }
                }
                else if (choice2 == 2)
                {
                    int row = 0, col = 0;
                    std::cout << "Enter row and col: ";
                    std::cin >> row >> col;
                    std::cout << "Price: " << theatre.getPrice(row - 1, col - 1) << std::endl;
                }
                else if (choice2 == 3)
                {
                    int row = 0, col = 0;
                    std::cout << "Enter row and col: ";
                    std::cin >> row >> col;
                    if (theatre.bookSeat(row - 1, col - 1))
                    {
                        std::cout << "Seat booked\n";
                    }
                    else
                    {
                        std::cout << "Seat not booked\n";
                    }
                }
                else if (choice2 == 4)
                {
                    std::cout << "Sum price: " << theatre.sumPrice() << std::endl;
                }
                else if (choice2 == 5)
                {
                    break;
                }
            }
        }
        else if (choice1 == 3)
        {
            break;
        }
    }

}