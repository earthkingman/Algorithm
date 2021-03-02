#include <stdio.h>

int main(void)
{
    int n;
    int sum;
    int d;
    int count;
    int answer;

    sum = 0;
    count = 1;
    d = 9;
    scanf("%d", &n);
    while (n > sum + d)
    {
        answer = answer + d * count;
        sum = sum + d;
        d = d * 10;
        count++;
        
    }
    answer = answer + (n - sum) * count;
    printf ("%d", answer);
    return (0);
}