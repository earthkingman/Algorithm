#include <stdio.h>
#include <vector>

using namespace std;
int main()
{
    int n,i,j;
    int temp;
    
    scanf("%d", n);
    vector<int> a(n);

    for (i = 1; i < n; i++)
    {
        temp = i;
        for (j = i - 1; j >=0; j--)
        {
            if (temp < a[j])
            {
                a[j + 1] = a[j];
            }
            else
                break;
        }
        a[j + 1] = temp;
    }

    return (0);
}