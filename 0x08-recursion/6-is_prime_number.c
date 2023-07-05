#include "main.h"

/**
 * is_prime_number_recursive - function that check prime number
 * @n:int
 * @i:int
 * Return: 0 or 1
 */
int is_prime_number_recursive(int n, int i)
{
	if (i == 1)
		return (1);
	if (n < 2)
		return (0);
	if (n % i  == 0)
		return (0);
	return (is_prime_number_recursive(n, i - 1));
}
/**
 * is_prime_number - function that returns
 * 1 if the input integer is a prime number, otherwise return 0
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	return (is_prime_number_recursive(n, n / 2));
}
