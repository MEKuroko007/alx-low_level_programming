#include "3-calc.h"
/**
 * main - fucntion calculate the five operators
 * @argc:number of arguments
 * @av:array contain numbers and operator
 * Return:0 (success)
 */
int main(int argc, char **av)
{
	int (*alx)(int, int);

	if (argc != 4)
	{
		printf("error\n");
		return (98);
	}
	alx = get_op_func(av[2]);

	if (!alx)
	{
		printf("error\n");
		return (99);
	}
	printf("%d\n", alx(atoi(av[1]), atoi(av[3])));
	return (0);
}
