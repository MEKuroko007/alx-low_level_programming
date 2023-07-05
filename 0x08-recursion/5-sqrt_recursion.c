#include "main.h"

/**
 * _recursion - function checks number sqrt
 * @number:int
 * @sqrt:int
 *
 * Return: int
 */
int _recursion(int number, int sqrt)
{
	if (number * number == sqrt)
		return (number);
	if (number * number >  sqrt)
		return (-1);
	return (_recursion(number + 1, sqrt));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_recursion(1, n));
}
