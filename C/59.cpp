#include <iostream>
#include <algorithm>
using namespace std;

int number[11];
void D(int l, int n)
{    
    if (l == n + 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (number[i] == 1)
                    printf("%d", i);
        }
        printf("\n");
    }
    else
    {
        number[l] = 1;
        D(l + 1, n);
        number[l] = 0;
        D(l + 1, n);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    D(1, n);
    return (0);
}