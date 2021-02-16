#include <iostream>
using namespace std;

int main(void)
{
    
    int n, i ,a ,max = -2147000000, min = 2147000000;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (max < a)
            max = a;
        if (min > a)
            min = a;
    }
    cout << max - min;
    return 0;
}