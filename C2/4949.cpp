#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;
int main()
{
    string str;
    int check = 0;

    while (1)
    {
        stack<char> list;
        getline(cin, str);
        if (str == ".")
            return 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
                list.push('(');
            else if (str[i] == '[')
                list.push('[');
            else if (str[i] == ']')
            {
                if (list.size() != 0 && list.top() == '[')
                    list.pop();
                else
                {
                    check = 1;
                    break;
                }
            }
            else if (str[i] == ')')
            {
                if (list.size() != 0 && list.top() == '(')
                    list.pop();
                else
                {
                    check = 1;
                    break;
                }
            }
        }
        if (check == 0 && list.empty())
            cout << "yes\n";
        else
            cout << "no\n";
        
    }
    return 0;
}