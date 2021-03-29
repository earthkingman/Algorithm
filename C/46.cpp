#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int m,n;
    int pos;
    int bp;
    int sum;

    pos = 0;
    bp = 0;
    sum = 0;
    scanf("%d", &n);
    vector<int>list(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        scanf("%d", &list[i]);
        sum += list[i];
    }
    scanf("%d", &m);
    if (m >= sum)
    {
        cout << "-1";
        return 0;
    }
    while (1)
    {
        pos++;
        if (pos > m)
            pos = 1;
        if (list[pos] > 0)
        {
            list[pos]--;
            bp++;
        }
        if (bp == m)
            break;
    }
    while (1)
    {
        pos++;
        if (pos > m)
            pos = 1;
        if (list[pos] > 0)
            break;
    }
    cout << pos;
}