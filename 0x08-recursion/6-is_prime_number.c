#include "main.h"

/**
 * check - function that checks to see if number is prime
 * @n1:int
 * @n2:int
 * Return:int
 */
int check(int n1, int n2)
{
	if (n2 < 2 || n2 % n1 == 0)
		return (0);
	else if (n1 > n2 / 2)
		return (1);
	else
		return (check(n1 + 1, n2));
}
/**
 * is_prime_number - function that states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
