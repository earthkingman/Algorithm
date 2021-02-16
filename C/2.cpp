#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int answer = 0;

    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        answer += i;
        if (i == b)
            cout << i << "=";
        else
            cout << i << "+";
    }
    cout << answer;
}