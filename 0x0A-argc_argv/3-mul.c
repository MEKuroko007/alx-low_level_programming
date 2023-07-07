#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments.
 * @av: An array of pointers to the arguments.
 * Return:1 for error and 0 for success
 */
int main(int argc, char **av)
{
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(av[1]);
	n2 = atoi(av[2]);

	printf("%d\n", n1 * n2);

	return (0);
}
