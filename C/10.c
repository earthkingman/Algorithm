#include <stdio.h>

int digit_sum(int x)
{
    int sum = 0;

    while (x > 0)
    {
        sum = sum + (x % 10);    
        x = x / 10; 
    }
    return sum;
}

int main(void)
{
    int a;
    int n;
    int nbr;
    int sum;
    int max = -2147000000;

  
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        sum = digit_sum(a);
        if (max < sum)
        {
            max = sum;
            nbr = a;
        }
        else if (max == sum)
            {
                if (nbr < a)
                    nbr = a;
            }
    }
    printf("%d",nbr);
    return(0);
}