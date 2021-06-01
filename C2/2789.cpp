#include <string>
#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    string str;
    string str2 = "CAMBRIDGE";
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < str2.size(); j++)
        {
            if (str[i] == str2[j])
            {
                str.erase(str.begin() + i);
                i--;
            }
        }
    }
    cout << str;
    return 0;
}