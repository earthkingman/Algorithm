#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string str;
    string str2;
    int n1;
    int n2;
    
    cin >> str >> str2;

    reverse(str.begin(), str.end());
    reverse(str2.begin(), str2.end());
    n1 = stoi(str);
    n2 = stoi(str2);
    if (n1 > n2)
        cout << n1;
    else
        cout << n2;
    return 0;
}