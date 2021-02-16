#include <stdio.h>


int main(void)
{
    int n;
    int m;
    int answer;

    answer = 0;
    scanf("%d %d",&n, &m);
    for (int i = 1; i <= n; i++)
    {
        if (i % m == 0)
            answer = answer + i; 
    }
    printf("%d",answer);
}