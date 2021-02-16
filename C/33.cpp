#include <stdio.h>
#include <iostream>
using namespace std;

int main(void)
{
    int n,tmp,idx;
    int list[100];
    int count = 0;

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&list[i]); 
    }
    for (int i = 0; i < n - 1; i++)
    {
        idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (list[idx] < list[j])
                idx = j;
        }
        tmp = list[idx];
        list[idx] = list[i];
        list[i] = tmp;
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        if (list[i] != list[i + 1])
            count++;
        if (count == 2)
        {
            printf("%d\n", list[i + 1]);
            break;
        }
    }
    return (0);
}