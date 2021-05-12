#include <iostream>
using namespace std;

int main()
{
    char arr[100];
    int count = 0;

    scanf("%s", arr);

    for (int i = 0; arr[i] != 0; i++)
    {
        if (arr[i] == 'A' || arr[i] == 'B' || arr[i] == 'C')
            count = count + 3;
        else if (arr[i] == 'D' || arr[i] == 'E' || arr[i] == 'F')
            count = count + 4;
        else if (arr[i] == 'G' || arr[i] == 'H' || arr[i] == 'I')
            count = count + 5;
        else if (arr[i] == 'J' || arr[i] == 'K' || arr[i] == 'L')
            count = count + 6;
        else if (arr[i] == 'M' || arr[i] == 'N' || arr[i] == 'O')
            count = count + 7;
        else if (arr[i] == 'P' || arr[i] == 'Q' || arr[i] == 'R' || arr[i] == 'S')
            count = count + 8;
        else if (arr[i] == 'T' || arr[i] == 'U' || arr[i] == 'V')
            count = count + 9;
        else if (arr[i] == 'W' || arr[i] == 'X' || arr[i] == 'Y' || arr[i] == 'Z')
            count = count + 10;
    }
    cout << count;
    return 0;
}