#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @s: char
 * Return: 0 is success
 */
void puts_half(char *s)
{
	int i = 0, n;

	while (s[i] != '\0')
		i++;
	if (i + 1 % 2 != '0')
		n = (i - 1) / 2;
	else
		n = (i / 2);
	n++;

	for (i = n; s[i] != '\0'; i++)
	_putchar(s[i]);
	_putchar('\n');
}
