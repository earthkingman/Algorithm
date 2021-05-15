
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    vector<int>stack_list(3,1);
    queue<int>q_list;
    int a;
    int b;

    q_list.push(1);
    cout << q_list.front();
    // b = stack_list.back();
    // cout << stack_list.front();

    //cout << b;
    return 0;
}