#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    string str, str2;

    cin >> str >> str2;
    sort(str.begin(),str.end());
    sort(str2.begin(),str2.end());

    if (str == str2)
        cout << "YES";
    else
        cout << "NO";
    cout << str << " " << str2;
    
}

