#include <iostream>
using namespace std;

int main()
{
    int fixed_cost;
    int variable_cost;
    int notebook_cost;
    int total_notebook_cost = 0;
    int total_cost;
    int i = 1;

    scanf("%d %d %d", &fixed_cost, &variable_cost, &notebook_cost);
    total_cost = fixed_cost;
    while (1)
    {
        i++;
        if (variable_cost > notebook_cost)
        {
            cout << "-1";
            return 0;
        }
        if (total_notebook_cost > total_cost)
            break;
        total_cost = total_cost + variable_cost;
        total_notebook_cost = notebook_cost * i;
    }
    cout << i;
    return 0;
}