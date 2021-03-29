#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int i = 0;
    char a[100];

    scanf("%s",a);
    stack<char>s;
    while (a[i] != 0)
    {
        if (a[i] == '(')
            s.push(a[i]);
        else if (a[i] == ')')
            {
                if (s.empty())
                {
                    cout << "NO";
                    return (0);
                }
                else
                    s.pop();
            }
        i++;
    }
    if (s.empty()) cout << "YES";
    else
    cout << "NO";
    return (0);
}