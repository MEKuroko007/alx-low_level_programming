#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s:char pointer
 * Return:void
 */
void _puts_recursion(char *s)
{
if (*s)
{
	/* print first string and increment address of s*/
	_putchar(*s);
	_puts_recursion(s + 1);
}
else
{
	/* new line */
	_putchar('\n');
}

}
