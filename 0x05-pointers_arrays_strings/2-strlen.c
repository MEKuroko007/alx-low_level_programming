#include "main.h"
/**
 * _strlen - function return the  lenght of string
 * @s : char to be counted
 * Description: this will return the length of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
