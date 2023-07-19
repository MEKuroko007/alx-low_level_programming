#include "main.h"
/**
 * print_name(char *name, void (*f)(char *)) - a function that prints a name.
 * @name:string
 * @f:function pointer
 * Return:void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
} /* urahara */
