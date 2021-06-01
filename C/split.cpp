#include <stdio.h>
#include <sstream>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string str, char a)
{
    vector<string>line_list;
    string temp;
    stringstream ss(str);
    while(getline(ss, temp, a))
    {
        line_list.push_back(temp);
    }
    return line_list;
}


int main()
{

    string line = "Thank you for visiting my Blog.";
    vector<string>line_vector = split(line, ' ');
 
    for (int i = 0; i < line_vector.size(); ++i)
        cout << line_vector[i] << endl;

    return 0;
}