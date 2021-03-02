#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int temp;
    int count;

    count = 0;
    scanf("%d" ,&n);
    for (int i = 1; i <= n; i++)
    {
        temp = i;
        while (temp > 0)
        {
            if (temp % 10 == 3)
                count++;
            temp = temp / 10;
        }
    }
    printf("%d", count);
    return (0);
}