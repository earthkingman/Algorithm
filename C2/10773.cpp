#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    int total = 0;
    int nbr;
    vector<int>stack;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nbr;
        if (nbr == 0)
            stack.pop_back();
        else
            stack.push_back(nbr);
    }
    for (int i = 0; i < stack.size(); i++)
    {
        total = total + stack[i];
    }
    cout << total;
    return 0;
}