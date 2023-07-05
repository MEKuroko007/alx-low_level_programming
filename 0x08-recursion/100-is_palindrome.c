#include "main.h"
#include <string.h>
/**
 * _palindrom - function that returns
 * 1 if a string is a palindrome and 0 if not
 *@i: int
 *@l: lenght
 *@str:string
 *Return: 0 or 1
 */
int _palindrom(int i, int l, char *str)
{
	if (str == NULL)
		return (1);
	if (str[i] == str[l])
		return (1);
	if (str[i] != str[l])
		return (0);
	if (l + 1 > i)
		return (_palindrom(i++, l--, str));
	return (1);
}
/**
 * is_palindrome - function check if a string is palindrom or not
 * by return 1 or 0
 * @s:string
 * Return:0 or 1
 */
int is_palindrome(char *s)
{
	int l = strlen(s);

	return (_palindrom(0, l, &s));
} /* essalhi */