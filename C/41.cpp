#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string a = "NewYork";
    string b = "newyork";
    if (a == b)
        printf("ok");
    else
        printf("no");
    return 0;
}