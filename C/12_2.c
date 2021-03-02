#include <stdio.h>

int main()
{
    int n;
    int k;
    int count = 1;
    int sum = 0;
    int res = 9;

    scanf("%d", &n);

    while (sum + res > n)
    {
        count = count * res ;
        sum = sum + res;
        res = res * 10;
        
    }
    return (0); 
}