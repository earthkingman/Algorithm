#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int max = 0;
    int temp = 1;
    scanf("%d", &n);
    vector<int> list(n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (list[i] <= list[i + 1])
        {
            
            temp++;
            
        }
        else
        {
            if (temp > max)
                max = temp;
            temp = 1;
        }
    }
    cout << max;
    return 0;
}