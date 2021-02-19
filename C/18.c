#include <stdio.h>

int main(void)
{
    int n, m;
    int max_time;
    int count;
    int sensor;

    max_time = 0;
    count = 0;
    scanf("%d", &n);
    scanf("%d", &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sensor);
        if (m < sensor)
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