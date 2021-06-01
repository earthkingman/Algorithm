#include <iostream>
using namespace std;


void D(int n)
{
    int temp;
    if (n == 0)
        return ;
    else
        {
            temp = n % 2;
            D(n / 2);
            cout << temp;
        }
}

int main()
{
    int n;

    cin >> n;
    D(n);
    return 0;
}