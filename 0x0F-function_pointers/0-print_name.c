#include "main.h"
/**
 * print_name(char *name, void (*f)(char *)) - a function that prints a name.
 */

void print_name(char *name, void (*f)(char *))
{
	if(name != NULL && f != NULL)
		f(name);
} /* urahara */
