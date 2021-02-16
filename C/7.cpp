#include <stdio.h>
using namespace std;
int main(void)
{
    char a[100];
    char answer[100];
    int i = 0;
    int j = 0;

    gets(a);
    while (a[i] != '\0')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            {
                answer[j] = a[i];
                j++;
            }
        if (a[i] >= 'A' && a[i] <= 'Z')
            {
                answer[j] = a[i] + 32;
                j++;
            }
        i++;
    }
    answer[j] = 0;
    printf("%s",answer);
    return(0);
}