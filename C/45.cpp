#include<vector>
#include<iostream>
using namespace std;

int main()
{
    int n;
    int m;
    int num;
    int break_point;
    int i;
    int count;

    count = 0;
    i = 1;
    break_point = 0;
    scanf("%d %d",&n,&m);
    vector<int> list(n + 1);
    while (1)
    {
        if (i > n)
            i = 1;
        if (break_point == n - 1)
            break;
        if (list[i] == 0)
        {
            count++;
            if (count == m)
            {
                list[i] = 1;
                count = 0;
                break_point++;
            }
        }
        i++;
    }
    for (int i = 1; i <= n + 1; i++)
    {
        if (list[i] == 0)
            cout << i;
    }
    return (0);
}