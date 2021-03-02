#include <stdio.h>

int main()
{
    char str[100];
    int i ,j;
    int c;
    int h;

    c = 0;
    h = 0;
    scanf("%s", &str);

    if (str[1] == 'H')
    {
        c = 1;
        for ( i = 2; str[i] != 0; i++)
        {
            h = h * 10 + (str[i] - 48);
        }
    }
    else
    {
    for (i = 1; str[i] != 'H'; i++)
        {
            c = c * 10 + (str[i] - 48);
        }
    for (j = i + 1; str[j] != 0; j++)
        {
            h = h * 10 + (str[j] - 48);
        }
    }
    if (h == 0)
        h = 1;
    printf ("%d %d",c,h);
    return (0);
}