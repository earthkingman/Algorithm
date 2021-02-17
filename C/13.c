#include <stdio.h>


int main(void)
{
    char nbr;
    char ch[10] = {0,};
    char arr[100];
    int i;
    int max = -1;
    int idx;

    i = 0;
    scanf("%s", &nbr);
    while (arr[i] != 0)
    {
        ch[arr[i] - 48]++;
        i++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (max <= ch[i])
        {
            max = ch[i];
            idx = i;
        }
    }
    printf("%d", idx);
    return (0);
}