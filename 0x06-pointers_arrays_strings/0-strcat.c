#include "main.h"

/**
 * _strcat - Concat Two String
 * @dest:char
 * @src:char
 * Return:char pointer
 */
char *_strcat(char *dest, char *src)
{
	char *string = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (string);
}
