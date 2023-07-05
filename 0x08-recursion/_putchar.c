#include <unistd.h>
/**
 * main - entry - point
 * _putchar - writes the character c to stdout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
