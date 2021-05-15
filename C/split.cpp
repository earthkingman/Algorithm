#include <iostream>
#include <vector>
#include <string>

using namespace std;


vector<string> split(string str, char deli)
{
    vector<string> internal;
    stringstream ss(str);
    string temp;
    while (getline(ss, temp, deli))
    {
        internal.push_back(temp);   
    }
    return internal;
}

int main()
{
    string line = "a b c d e f g h j k";
    vector<strng> split;
    return 0;
}