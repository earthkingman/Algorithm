#include <stdio.h>
#include <vector>

using namespace std;
int main()
{
    int n;
    int num;
    int key;
    int lt;
    int rt;
    int mid;
    vector <int> a;

    scanf("%d %d", &n, &key );
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        a.push_back(num);
    }
    sort(a.begin(), a.end());
    lt = 0;
    rt = n - 1;
    while (lt <= rt)
    {
        mid = (lt + rt) / 2;
        if (a[mid] > key)
        {
            rt = mid - 1;
        }
        else if (a[mid] < key)
        {
            lt = mid + 1;
        }
        else
            {
                printf("%d", mid + 1);
                return 0;
            }
    }
    return (0);
}