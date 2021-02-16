#include <stdio.h>

int main(void)
{
    int n;
    int sum;
    int nbr;
    int count;
    int answer;

    sum = 0;
    count = 1;
    nbr = 9;
    scanf("%d", &n);
    while (n > sum + nbr)
    {
        answer = answer + nbr * count;
        sum = sum + nbr;
        nbr = nbr * 10;
        count++;
        
    }
    answer = answer + (n - sum) * count;
    printf ("%d", answer);
    return (0);
}