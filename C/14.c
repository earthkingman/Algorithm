#include <stdio.h>
#include <stdbool.h>

int  reverse(int x)
{
    int nbr;

    nbr = 0;
    while (x > 0)
    {
        nbr = (nbr * 10) + (x % 10);
        x = x / 10;
    }
    return (nbr);
}

bool isPrime(int x)
{
    int count;

    count = 0;
    if (x == 1)
        return (false);
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
           return (false); 
    }
    return (true);
}

int main(void)
{
    int n;
    int nbr;
    int re_nbr;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nbr);
        re_nbr = reverse(nbr);
        if (isPrime(re_nbr))
            printf("%d ", re_nbr);
    }
    return (0);
}