#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int nbr;
    int temp;
    int i =0;
    vector<int> list(100);

    nbr = 1234;
    while (nbr > 0)
    {   cout << nbr;
        temp = nbr % 10;
        cout << temp;
        list[i] = temp;
        nbr = nbr / 10;
    }
    sort(list.end(), list.begin());
    for (int i = 0 ; i < list.size(); i++)
    {
        cout << list[i];
    }
    return 0;
}