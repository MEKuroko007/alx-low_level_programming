#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	srand(time(0));
	number = rand() - RAND_MAX / 2;

	if (number == 0)
		printf("%d is zero\n", number);
	else if (number < 0)
		printf("%d is negative\n", number);
	else
		printf("%d is positive\n", number);

	return (0);
}