#include <unistd.h>
#include <stdio.h>

int check(char *str, char a)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        if (str[i] == a)
            return 1;
        i++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;
    char answer[1000];
    k = 0;
    i = 0;
    j = 0;
    if (argc < 2)
        return 0;
    while (argv[1][i] != 0)
    {
        if (check(answer, argv[1][i]) == 0 )
        {
            answer[k] = argv[1][i];
            k++;
        }
        i++;
    }
    while (argv[2][j] != 0)
    {
        if (check(answer, argv[2][j]) == 0)
        {
            answer[k] = argv[2][j];
            k++;
        }
        j++;
    }
    answer[k] = 0;
    k = 0;
    while (answer[k] != 0)
    {
        write(1, &answer[k], 1);
        k++;
    }
    return (0);
}