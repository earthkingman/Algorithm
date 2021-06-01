#include <string>
#include <iostream>
using namespace std;

void D(int n)
{
    if (n > 7)
        return;
    else
    {
        cout << n;
        D(n * 2);
        D(n * 2 + 1);
    }
}

int main()
{
    D(1);
    return 0;
}