#include <stdio.h>
#include <stack>
using namespace std;

int main()
{
    char a[100];
    scanf("%s", a);
    stack<char> st;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == '(')
        {
            st.push('(');
        }
        else if (a[i] == ')')
        {
            if (st.empty())
            {
                printf("N O");
                return (0);
            }
            else
                st.pop();
        }
    }
    if(st.empty())
    {
        printf("YES");
    }
    else
        printf("N0");
    return (0);
}