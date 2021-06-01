#include <iostream>
#include <string>
#include<math.h>  
#include <vector>
#include <iostream>

using namespace std;

int check_list[32];
int check_list2[32];

int main()
{
    string line;
    int answer = 0;
    int count = 0;

    cin >> line;
    for (int i = 0; i < line.length(); i++)
    {
        check_list[line[i] - 'a']++;
    }
    cin >> line;
    for (int i = 0; i < line.length(); i++)
    {
        check_list2[line[i] - 'a']++;
    }

    for (int i = 0; i < 32; i++)
    {
        if (check_list[i] != check_list2[i])
        {
            answer = answer + abs(check_list[i] - check_list2[i]);
        }
    }
    cout << answer;
    return 0;
}