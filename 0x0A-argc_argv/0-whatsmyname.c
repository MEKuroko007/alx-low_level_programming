#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments
 * @av: An array of pointers to the arguments.
 *__attribute__((__unused__)) argc:ignore any warnings about argc
 * Return: Always o.
 */
int main(int __attribute__((__unused__)) argc, char **av)
{
	printf("%s\n", av[0]);

	return (0);
}
