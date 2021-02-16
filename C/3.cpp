#include <iostream>
using namespace std;

int main()
{
    int n;
    int answer = 0;

    cin >> n;
    cout << "1";
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            answer += i;
            cout << " + " << i;
        }

    }
    cout << " = " << answer + 1;
    return 0;
}