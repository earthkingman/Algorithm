#include <vector>
#include <stdio.h>
#include <iostream>

using namespace std;
int map[100][100];

int check(int i, int j)
{
    if ((map[i][j] > map[i + 1][j]) && (map[i][j] > map[i - 1][j]) && (map[i][j] > map[i][j - 1]) && (map[i][j] > map[i][j + 1]))
        return 1;
    return 0;
}

int main()
{
    int m,n;
    int count;

    count = 0;
    scanf("%d" , &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d" , &map[i][j]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (check(i, j) == 1)
                count++;
        }
    }

    cout << count;

    return (0);
}