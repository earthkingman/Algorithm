#include <string>
#include <vector>
#include <iostream>
using namespace std;

void check_prime(int n)
{
    int i = 2;
    int nbr;

    if (n == 1 || n == 2)
    {
        cout << "It is a prime word.";
        return;
    }

    nbr = n / 2;
    while (i <= nbr)
    {
        if (n % i == 0)
        {
            cout << "It is not a prime word.";
            return;
        }
        i++;
    }
    cout << "It is a prime word.";
}

int main()
{
    string str;
    int sum = 0;

    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            sum = sum + (str[i] - 'a' + 1);
        else
            sum = sum + (str[i] - 'A' + 1);
    }
    check_prime(sum);
    return 0;
}