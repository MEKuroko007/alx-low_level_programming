#include "variadic_functions.h"

/**
 * print_all - prints char, integer, float, string
 * @format:format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j, count = 0;
	char *str;
	char arg[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (arg[j])
		{
			if (format[i] == arg[j] && count)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), count = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), count = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), count = 1;
			break;
		case 's':
			str = va_arg(args, char *), count = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(args);
}
