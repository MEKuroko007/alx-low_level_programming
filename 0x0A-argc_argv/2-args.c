#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: The number of arguments
 * @av: array of arguments
 * Return: 0
 */
int main(int argc, char **av)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
