#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int max = -2147000000;
    int temp = 0;;
    int n;
    int k;
    
    scanf("%d", &n);
    scanf("%d", &k);
    vector<int>list(n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    for (int i = 0; i < n - k + 1; i++)
    {
        for (int j = i; j < i + k; j++)
        {
            temp = temp + list[j];
        }
        if (temp > max)
            max = temp;
        temp = 0;
    }
    cout << max;
    return(0);
}