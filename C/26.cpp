#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    vector<int> a(n);
    vector<int> b(n, 1);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i] <= a[j])
                b[i]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    return (0);
}