#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments
 * @av: An array of pointers to the arguments.
 *__attribute__((__unused__)) **av: ignore any warning about av
 * Return:0
 */
int main(int argc, char __attribute__((__unused__)) **av)
{
	printf("%d\n", argc - 1);

	return (0);
}
