#include <unistd.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int i;

	printf("%s\n",*av) ;
	*av++;
	printf("%s\n",*av) ;
	
	return (0);
}