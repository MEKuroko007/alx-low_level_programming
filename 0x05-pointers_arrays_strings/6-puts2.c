#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @s: char
 * Return: 0 success
 */
void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	if (i % 2 == 0)
		_putchar(s[i]);
	_putchar('\n');
}
