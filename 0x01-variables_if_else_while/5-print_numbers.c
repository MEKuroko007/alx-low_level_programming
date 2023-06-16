#include <stdio.h>
/**
 * main - entry - point
 * prints all single digit numbers of base
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	printf("\n");

	return (0);
}
