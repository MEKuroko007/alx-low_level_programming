#include <stdio.h>
/**
 * main - entry -point
 * prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
