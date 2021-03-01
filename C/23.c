#include <stdio.h>

int main(void)
{
    int n;
    int max;
    int count;
    int list[100000];

    max = 0;
    count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (list[i] <= list[i + 1])
            count++;
        else
        {
            if (max < count)
            {
                max = count + 1;
            }
            count = 0;
        }
    }
    printf("%d", max);
    return (0);
}