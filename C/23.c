#include <stdio.h>

int main(void)
{
    int n, pre;
    int now;
    int max;
    int count;

    max = 0;
    count = 1;
    scanf("%d %d", &n, &pre);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &now);
        if (now > pre)
            {
                count++;
                if (count > max)
                    max = count;
            }
        else count = 1;
        pre = now;
    }
    printf("%d", max);
    return (0);
}