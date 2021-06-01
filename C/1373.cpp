#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    int a;
    int x = 1;
    int b;
    int sum = 0;
    int answer = 0;
    vector<int>list;

    cin >> n;
    if (n == 0)
    {
        list.push_back(0);
        cout << list[0];
        return 0;
    }
    while(n > 0)
    {
        sum = sum + (n % 10 * x);
        n = n / 10;
        x = x * 2;
    }
    while (sum > 0)
    {
        list.push_back(answer * 10 + (sum % 8));
        sum = sum / 8;
    }
    reverse(list.begin(), list.end());
    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i];
    }
    return 0;
}