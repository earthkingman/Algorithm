#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n;
    int count = 0;
    int number = 1;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == 'O')
                {
                    count = count + number;
                    number++;
                }
            else
                number = 1;
        }
        cout << count << "\n";
        number = 1;
        count = 0;
    }

    return 0;
}