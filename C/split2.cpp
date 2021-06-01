#include <stdio.h>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string str, char a)
{
    string temp;
    stringstream ss(str);
    vector<string>result;
    while(getline(ss,temp,a))
    {
        result.push_back(temp);
    }

    return result;
}


int main()
{

    string line = "Thank you for visiting my Blog.";
    vector<string>line_vector = split(line, ' ');
 
    for (int i = 0; i < line_vector.size(); ++i)
        cout << line_vector[i] << endl;

    return 0;
}