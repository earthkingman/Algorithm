#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int max = 0;
    int temp = 0;
    int k;
    scanf("%d %d", &n, &k);
    vector<int>list(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    for (int i = 0; i < k; i++)
    {
        max = max + list[i];
    }
    temp = max;
    for (int i = k; i < n; i++)
    {
        temp = temp - list[i - k] + list[i];
        if (temp > max)
            max = temp;
    }
    cout << max;
    return (0);
}