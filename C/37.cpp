#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

void check(vector<int> &a, int num)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == num)
        {
            a.erase(a.begin() + i);
            return;
        }
    }
    a.pop_back();
}

int main()
{
    int n, s;
    int num;

    scanf("%d %d", &n, &s);
    vector<int> a(n, 0);

    for (int i = 0; i < s; i++)
    {
        scanf("%d", &num);
        check(a, num);
        a.insert(a.begin(), num);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return (0);
}