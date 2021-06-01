#include <iostream>
using namespace std;

int n;
int total;
bool check = false;
int list[100000];

void D(int L, int sum)
{
    if (check == true)
        return ;
    if (L == n + 1)
    {
        if ((total - sum) == sum)
            check = true;
    }
    else
    {
        D(L + 1, sum + list[L]);
        D(L + 1, sum);
    }
}



int main()
{
    cin >> n;

    for (int i = 1; i <=n; i++)
    {
        cin >>list[i];
        total = total + list[i];
    }
    D(1, 0);
    if (check == false)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}