#include <stdio.h>

int main(void)
{
    int list[101];
    int n;
    int temp;
    int max;
    int count = 0;

    scanf("%d" ,&n);
    for(int i = 0; i < n; i++)
    {
        scanf ("%d", &list[i]); 
    }
    max = list[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (list[i] > max)
            {
                max = list[i];
                count ++;
            }
    }
    printf("%d",count);
    return (0);
}