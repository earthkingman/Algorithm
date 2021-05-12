#include <iostream>
using namespace std;
#include <string>

int main()
{
    int n = 0;
    int repeat = 0;
    string str;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        cin >> repeat >> str;
        for (int k = 0; k < str.length(); k++)
        {
            for (int j = 0; j < repeat; j++)
            {
                cout << str[k];
            }
        }
        cout << "\n";
    }
    return 0;
}