#include <iostream>
using namespace std;

int main()
{
    int n;
    int temp = 0;
    int max = -2147000000;
    int min = 2147000000;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > max)
            max = temp;
        if (temp < min)
            min = temp;
    }
    cout << min << " " << max;
    return 0;
}