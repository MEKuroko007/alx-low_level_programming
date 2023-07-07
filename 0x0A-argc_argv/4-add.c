#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: 1 if there are another type passed
 *         Otherwise return  0.
 */
int main(int argc, char **av)
{
	int n, digit, s = 0;

	for (n = 1; n < argc; n++)
	{
		for (digit = 0; av[n][digit]; digit++)
		{
			if (av[n][digit] < '0' || av[n][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		s += atoi(av[n]);
	}

	printf("%d\n", s);

	return (0);
}
