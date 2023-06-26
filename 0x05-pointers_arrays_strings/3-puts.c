#include "main.h"
#include <stdio.h>
/**
 * _puts - print string
 * @str: char to check
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
