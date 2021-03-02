#include <vector>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,j ,tmp;

    scanf("%d", &n);
    vector <int> ch(n + 1);
    for (int i = 2; i <= n; i++)
    {
        j = 2;
        tmp = i;
        while (1)
        {
            if (tmp % j == 0)
            {
                tmp = tmp / j;
                ch[j]++;
            }
            else
                j++;
            if (tmp == 1)
                break;
        }
    }
    return (0);
}