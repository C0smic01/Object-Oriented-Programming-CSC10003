#include "SortAscending.h"

void SortAscending::Sort(std::vector<std::shared_ptr<Booth>>& booths)
{
    for (int i = 0; i < booths.size() - 1; i++)
    {
        for (int j = i + 1; j < booths.size(); j++)
        {
            if (booths[i]->totalPrice() > booths[j]->totalPrice())
            {
                std::swap(booths[i], booths[j]);
            }
        }
    }
}