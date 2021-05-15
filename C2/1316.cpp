#include <stdio.h>
#include <vector>

int alpha_list[100];
int main()
{
    int n;
    char str[10000];
    char temp;
    int check = 1;
    int answer = 0;
    int j = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        j = 0;
        check = 1;
        scanf("%s", str);

        while (str[j] != 0)
        {
            if (alpha_list[str[j] - 'a'] == 0)
            {
                temp = str[j];
                alpha_list[str[j] - 'a']++;
                while (str[j] == temp)
                {
                    j++;
                }
            }
            else
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            answer++;
        }
        for (int k = 0; k < 35; k++)
        {
            alpha_list[k] = 0;
        }
    }
    printf("%d\n", answer);
    return 0;
}