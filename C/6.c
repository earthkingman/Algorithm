#include <stdio.h>

int main(void)
{
    char a[100];
    int i = 0;
    int answer = 0;
    int count = 0;

    scanf("%s",&a);
    while (a[i] != 0)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            answer = (answer * 10) + (a[i] - 48);
        }
        i++;
    }
    for (int j = 1 ; j <= answer; j++)
    {
        if (answer % j == 0)
            count++;
    }
    printf("%d\n%d", answer, count);

    return (0);
}