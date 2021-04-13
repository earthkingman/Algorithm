#include <iostream>
#include <vector>

using namespace std;

void decimalTobinary(int n)
{
    int temp;
    if ((n / 2) > 0)
    {
        decimalTobinary(n / 2);
    }
    temp = n % 2;
    printf("%d", temp);
}

int main()
{
    int n;

    cin >> n;
    decimalTobinary(n);
    return (0);
}