#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int a;
    int b;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        cout << a + b<<"\n";
    }
    return 0;
}