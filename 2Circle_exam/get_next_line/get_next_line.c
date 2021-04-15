#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        i++;
    }
    return (i);
}

char *sum(char *line, char buff)
{
    int size;
    char *str;
    int i;

    i = 0;
    size = ft_strlen(line);
    str = (char *)malloc(sizeof(char) * (size + 2));
    if (!str)
        return (NULL);
    while (line[i] != 0)
    {
        str[i] = line[i];
        i++;
    }
    str[i] = buff;
    i++;
    str[i] = 0;
    free(line);
    return (str);
}

int get_next_line(char **line)
{
    int rb;
    char buff;

    *line = malloc(1);
    (*line)[0] = 0;
    while((rb = read(0, &buff, 1)) > 0)
    {
        if (buff == '\n')
            return (1);
        *line = sum(*line, buff);
        if (*line)
            return(-1);
    }
    if (rb == -1)
        return (-1);
    return (0);
}
