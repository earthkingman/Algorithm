#include <stdio.h>


int main(void)
{
    int arr[10] = {0,};
    int n;
    int max = -1;
    int idx;

    while (n > 0)
    {
        arr[n % 10]++;
        n = n / 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
            idx = i;
        }
    }
    printf("%d", idx);
}