#include <iostream>
using namespace std;

int check_list[100];

void D(int n, int L)
{
    if (L > n)
    {
        for (int i = 1; i <= n; i++)
        {
            if (check_list[i] == 1)
                cout << i;
        }
        cout << "\n";
        return ;
    }
    else
    {
        check_list[L] = 1;
        D(n, L + 1);
        check_list[L] = 0;
        D(n, L + 1);
        
    }

}


int main()
{
    D(3, 1);
    return 0;
}