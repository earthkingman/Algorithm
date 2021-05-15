#include <iostream>
#include <string>
using namespace std;

int stack[100000];

void stack_push(int nbr, int &point)
{
    stack[point] = nbr;
    point++;
}

int stack_pop(int &point)
{
    if (point > 0)
    {
        int temp;
        temp = stack[point - 1];
        stack[point - 1] = 0;
        point--;
        return temp;
    }
    else
        return -1;
}

int stack_size()
{
    int i = 0;

    while (stack[i] != 0)
    {
        i++;
    }
    return i;
}

int stack_empty()
{
    if (stack_size() == 0)
        return 1;
    else
        return 0;
}

int stack_top()
{
    if (stack_size() == 0)
        return -1;
    else
        return stack[stack_size() - 1];
}
int main()
{
    int n;
    int temp;
    string str;
    int nbr;
    int point = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> nbr;
            stack_push(nbr, point);
            //cout << "point : " << point <<"\n";
        }
        else if (str == "pop")
        {
            temp = stack_pop(point);
            cout << temp << "\n";
            //cout << "point : " << point <<"\n";
        }
        else if (str == "size")
        {
            temp = stack_size();
            cout << temp << "\n";
        }
        else if (str == "empty")
        {
            temp = stack_empty();
            cout << temp << "\n";
        }
        else if (str == "top")
        {
            temp = stack_top();
            cout << temp << "\n";
        }
    }
}