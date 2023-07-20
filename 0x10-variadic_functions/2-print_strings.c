#include "variadic_functions.h"

/**
 * print_strings - print string with sepatator
 * @separator:separator
 * @n:args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *ptr;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		ptr = va_arg(args, char *);
		printf("%s", (ptr == NULL) ? "(nil)" : ptr);
	}
	printf("\n");
	va_end(args);
}
