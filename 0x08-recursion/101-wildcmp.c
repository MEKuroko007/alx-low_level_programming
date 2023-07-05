#include "main.h"
#include <stdio.h>
/**
 * str_checker - function that compare two strings
 * @s1:string
 * @s2:string
 * @i:index
 * @j:index
 * Return: 1 or 0
 */
int _compare(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (_compare(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (_compare(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (_compare(s1, s2, i + 1, j) || _compare(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - compare two string
 * @s1:string
 * @s2:string
 * Return:0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	return (_compare(s1, s2, 0, 0));
} /*essalhi*/
