int ft_strlen(char *str)
{
	int cnt = 0;
	while (str[cnt])
		++cnt;
	return (cnt);
}
​
char *ft_charappend(char *line, char buff)
{
	int idx = 0;
	char *rst;
​
	if (!(rst = (char *)malloc(sizeof(char) * (ft_strlen(line) + 2))))
		return (NULL);
	while (line[idx])
	{
		rst[idx] = line[idx];
		++idx;
	}
	rst[idx] = buff;
	++idx;
	rst[idx] = 0;
	free(line);
	return (rst);
}
​
int get_next_line(char **line)
{
	int rb;
	char buff;
​
	if (!(*line = malloc(1)))
		return (-1);
	(*line)[0] = 0;
	while ((rb = read(0, &buff, 1)) > 0)
	{
		if (buff == '\n')
			return (1);
		*line = ft_charappend(*line, buff);
		if (*line == 0)
			return (-1);
	}
	if (rb == -1)
		return (-1);
	else
		return (0);
}




