#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;
int main()
{
    int n, m;
    int pos;
    int count;

    count = 0;
    pos = 0;
    scanf("%d", &n);
    vector<int> a(n + 1);
    for (int i = 1; i < n + 1; i++)
    {  
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);

    while (1)
    {
        pos++;
        if (pos > n)
            pos = 1;
        if (a[pos] > 0)
        {
            a[pos] = a[pos] - 1;
            count++;
        }
        if (count == m)
        {
            break;
        }
    }
    while (1)
    {
        pos++;
        if (pos > n)
            pos = 1;
        if (a[pos] > 0)
        {
            cout << pos;
            return 0;
        }
    }


    cout << "-1";
    return (0);
}