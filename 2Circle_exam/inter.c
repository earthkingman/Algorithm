#include <unistd.h>
#include <stdio.h>

int check(char *str, char a)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == a)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;
    char arr[100000];

    k = 0;
    i = 0;
    j = 0;
    if (argc == 1)
        return 0;
    while (argv[1][i] != '\0')
    {
        j = 0;
        while (argv[2][j] != '\0')
        {
            if (argv[1][i] == argv[2][j])
            {
                if(check(arr, argv[2][j]) == 0)
                { 
                    arr[k] = argv[2][j];
                    k++;
                }
            }
            j++;
        }
        i++;
    }
    arr[k] = '\0';
    k = 0;
    while (arr[k] != '\0')
    {
        write(1, &arr[k],1);
        k++;
    }
    return (0);
}