#include "main.h"
/**
 * swap_int - very simple function to swap two integers
 * @a : first number
 * @b : second number
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
