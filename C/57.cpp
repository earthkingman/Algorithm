#include <iostream>
#include <algorithm>
using namespace std;

void D(int n)
{
    int temp;
    if (n == 0)
        return ;
    tob(n / 2);
    temp = n % 2;  
    printf("%d",temp);
}

int main(void)
{
    int a;

    scanf("%d", &a);
    D(a);
    return 0;
}