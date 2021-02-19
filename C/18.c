#include <stdio.h>

int main(void)
{
    int n, m;
    int max_time;
    int count;
    int sensor[10] = {23,17,120,34,112,136,123,23,25,113};

    max_time = 0;
    count = 0;
    n = 10;
    m = 90;

    for (int i = 0; i < n; i++)
    {
        if (m < sensor[i])
            {   
                count++;
                if (max_time < count)
                    max_time = count;
            }
        else
            count = 0;
    }
    printf("%d", max_time);
    return (0);
}