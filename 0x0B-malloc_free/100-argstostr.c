#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac:integer
 * @av:string
 * Return: a pointer arg
 */
char *argstostr(int ac, char **av)
{
	int i = 0i, size = 0, j, k;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc(sizeof(char) * (size + 1));
	if (arg == NULL)
		return (NULL);
	i = 0;
	for ( ; i < ac ; i++)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];

			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
	}
	arg[k] = '\0';
	return (arg);
} /* essalhi */
