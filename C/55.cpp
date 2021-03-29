#include <stack>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    int temp;
    int count = 1;

    scanf("%d", &n);
    
    string str;
    stack<int>st;
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &temp);
       st.push(temp);
       str += "P";
       while (st.top() == count)
        {
            st.pop();
            count++;
            str += "O";
            if (st.empty())
                break;
       }
    }
    if (!st.empty())
        printf("impossible");
    else
        cout <<  str;
    return (0);
}