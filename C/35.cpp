#include <stdio.h>

int main()
{
    int n;
    int tmp;
    int list[101];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (list[j] > 0 && list[j + 1] < 0)
            {
                tmp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = tmp; 
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
       printf(" %d", list[i]);
    }

    return (0);
}