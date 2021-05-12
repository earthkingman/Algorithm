#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n;

    scanf("%d", &n);
    vector<int> list(n);
    vector<int> rank(n, 1);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(list[i] < list[j])
                rank[i]++;
        }
    }
    for (int i= 0; i < n; i++)
    {
        cout << rank[i];
    }
    return 0;
}