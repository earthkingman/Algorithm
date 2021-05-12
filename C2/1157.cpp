#include <iostream>
#include <string>
using namespace std;

int number_list[40];
int main()
{
    char str[1000000];
    char temp;
    int count = 0;
    int idx;
    int max = -2147000000;
    char answer = 'A';

    scanf("%s", str);
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            temp = str[i] - 'A';
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
            temp = str[i] - 'a';
        number_list[temp]++;
    }
    for (int i = 0; i < 32; i++)
    {
        if (max < number_list[i])
        {
            max = number_list[i];
            idx = i;
        }
    }
    for (int i = 0; i < 32; i++)
    {
        if (max == number_list[i])
            count++; 
    }
    if (count != 1)
        cout << "?";
    else
    {
        answer = answer + idx;
        cout << answer;
    }
        
    return 0;
}