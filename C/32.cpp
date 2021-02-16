#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a[100];
    int idx, temp;

    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[idx] > a[j])
                idx = j;
        }
        temp = a[i];
        a[i] = a[idx];
        a[idx] = temp;
    }
}