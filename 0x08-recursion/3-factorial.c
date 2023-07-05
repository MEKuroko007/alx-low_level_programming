#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n:number
 * Return:factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1 * factorial(n - 1));
	}
} /* essalhi */
