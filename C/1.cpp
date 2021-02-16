#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int m;
    int answer;

    answer = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i % m == 0)
            answer = answer + i; 
    }
    cout << answer;
    return(0);
}