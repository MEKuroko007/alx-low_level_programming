#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	srand(time(0));
	number = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", number, number % 10);
	if (number % 10 > 5)
		printf("and is greater than 5\n");
	else if (number % 10 == 0)
		printf("and is 0\n");
	else if (number % 10 < 6 && number % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
