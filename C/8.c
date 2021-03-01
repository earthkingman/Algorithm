#include <stdio.h>

int main(void)
{
    char str[1000];
    int count;
    int i;

    i = 0;
    count = 0;
    scanf("%s", &str);
    while (str[i] != '\0')
    {
        if (str[i] == '(')
            count++;
        else if (str[i] == ')')
            count--;
        if (count < 0)
            break;
        i++;
    }
    if (count == 0)
        printf("YES");
    else
        printf("NO");
}