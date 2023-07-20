#include "function_pointers.h"
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @av: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **av[])
{
	int b, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(av[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
