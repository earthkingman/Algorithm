#include <stdio.h>

int main(void)
{
    int n,m,sum,max;
    
    int list[100];
    max = -2147000000;
    sum = 0;
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    for (int i = 0; i < n - m + 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += list[i + j];
        }
        if (max < sum)
            max = sum;
        sum = 0;
    }
    printf("%d", max);
    return (0);
}