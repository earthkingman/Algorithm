#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    int k;
    int max;
    int sum;

    sum = 0;
    scanf ("%d %d", &n, &k);
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (int i = 0; i < k; i++)
        sum = sum + a[i];
    max = sum;
    for (int i = k; i < n; i++)
    {
        sum = sum + a[i] - a[i - k];
        if (max < sum)
            max = sum;
    }
    printf("%d\n", max);
    return (0);
}