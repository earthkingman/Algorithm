#include <stdio.h>

int main(void)
{
    int a[10];
    int b[10];
    char last_check;
    int  a_score;
    int  b_score;

    a_score = 0;
    b_score = 0;
    last_check = 0;
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > b[i])
        {
            a_score += 3;
            last_check = 'A';
        }
        else if (a[i] < b[i])
        {
            b_score += 3;
            last_check = 'B';
        }
        else
        {
            a_score += 1;
            b_score += 1;
        }
    }
    printf("%d %d\n", a_score,b_score);
    if (a_score > b_score)
        printf("A");
    else if (a_score < b_score)
        printf("B");
    else
    {
        if (last_check == 0)
            printf ("D");
        else
            printf("%c", last_check);
    }
    return (0);
}