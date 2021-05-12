#include <string>
#include <iostream>
using namespace std;
int main()
{
    int n;
    string str;
    int count = 0;
    int alphabet_check = 0;

	getline(cin, str);
    for (int i = 0; str[i] != 0; i++)
    {
        if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && alphabet_check == 0)
        {
            count++;
            alphabet_check = 1;
        }
        else if (str[i] == ' ')
            alphabet_check = 0;
    }
    cout << count;
    return 0;
}