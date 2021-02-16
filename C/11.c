#include <stdio.h>

int check_num(int num)
{
    int count = 0;

    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    return (count);
}

int main()
{
    int n;
    int answer = 0;

    scanf("%d", &n);
    while (n > 0)
    {
        answer = answer + check_num(n);
        n--;
    }
    printf("%d", answer);
    return (0);
}