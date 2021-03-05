#include <vector>
#include <algorithm>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int num;
    int pos;
    int break_point = 0;
    int count = 0;

    pos = 0;
    scanf("%d %d", &n, &m);
    vector<int> prince(n + 1);
    while(1)
    {
        pos++;
        if (pos > n)
            pos = 1;
        if (prince[pos] == 0)
        {
            count++;
            if(count == m)
                prince[pos] = 1;
                cnt = 0;
                break_point++;
        }
        if (break_point == n-1)
            break;
    }

    return (0);
}