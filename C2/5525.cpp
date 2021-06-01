#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    string str2;
    int n, m;
    int temp;
    int answer = 0;
    cin >> n;

    for (int i = 0; i < (2 * n + 1); i++)
    {
        if (i % 2 == 0)
            str = str + "I";
        else
            str = str + "O";
    }
    cin >> m;
    cin >> str2;
    for (int i = 0; i < str2.length(); i++)
    {
        for (int j = 0; j < str.length(); j++)
        {
            temp = i;
            while (str2[temp] == str[j])
            {
                temp++;
                j++;
                if (j == str.length())
                    answer++;
            }
            break;
        }
    }
    cout << answer;
    return 0;
}