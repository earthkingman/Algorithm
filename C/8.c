#include <stdio.h>

int main(void)
{
    char a[100];
    int left = 0;
    int right = 0;
    int i = 0;
    scanf("%s", &a);
    while(a[i])
    {
        if (a[i] == '(')
            left++;
        if (a[i] == ')')
            right++;
        i++;
    }
    if (right == left)
        printf("YES");
    else
        printf("NO");
}