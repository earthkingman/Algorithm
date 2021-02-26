#include <stdio.h>

int main(void)
{
    int n;
    int m;
    int count;
    int max;
    int list[100];

    count = 0;
    scanf("%d", &n);
    for (int i = 0 ; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    max = list[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (max < list[i])
        {
            max = list[i];
            count++;
        }
    }
    printf("%d", count);
    return (0);
}