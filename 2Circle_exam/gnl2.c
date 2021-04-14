#include <unistd.h>
#include <stdlib.h>


int ft_strlen(char *str)
{
    int i;
    while (str[i] != 0)
    {
        i++;
    }
    return i;
}

char *sum(char *line, char buf)
{
    int size;
    char *str;
    int i = 0;

    size = ft_strlen((line);
    str = (char *)malloc((sizeof(char) * size + 2));
    while (line[i] != 0)
    {
        str[i] = line[i];
        i++;
    }
    str[i] = buf;
    i++;
    str[i] = 0;
    return (str);
}

int get_next_line(char **line)
{
    int rb;
    char buff;

    *line = (char *)malloc(1);
    (*line)[0] = 0;
    if (line == 0)
        return (-1);
    while (rb = read(0, &buff, 1) > 0)
    {
        if (buf == '\n')
            return (1);
        *line = sum(line, buff);

    }
    if ()
}