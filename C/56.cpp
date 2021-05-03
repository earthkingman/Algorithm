#include <iostream>
using namespace std;


void print_number(int n)
{
    if (n == 0)
        return;
    else
    {
        
        print_number(n - 1);
        printf("%d", n);
    }
}

int main()
{
    int n;

    cin >> n;
    print_number(n);
    return (0);
}