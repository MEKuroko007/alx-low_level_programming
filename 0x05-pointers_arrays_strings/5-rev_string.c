#include "main.h"
/**
 * rev_string - reverses index string
 * _putchar - print each character
 * @s: char to check
 *
 * Description: This will reverse a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int index = 0, first, end;
	char tmp;

	while (s[index] != '\0')
	{
		index++;
	}
	end = index - 1;
	for (first = 0; end >= 0 && first < end; end--, first++)
	{
		tmp = s[first];
		s[first] = s[end];
		s[end] = tmp;
	}
}