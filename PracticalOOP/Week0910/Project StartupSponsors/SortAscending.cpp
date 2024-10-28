#include "SortAscending.h"

void SortAscending::Sort(std::vector<std::shared_ptr<Project>>& projects)
{
    for (int i = 0; i < projects.size() - 1; i++)
    {
        for (int j = i + 1; j < projects.size(); j++)
        {
            if (projects[i]->Sponsor() > projects[j]->Sponsor())
            {
                std::swap(projects[i], projects[j]);
            }
        }
    }
}