#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: char
 *
 * Return: A integer
 */
int _atoi(char *s)
{
int sign = 1, number = 0, index = 0;

if (s[0] == '-')
{
sign = -1;
index = 1;
}
while (s[index] != '\0')
{
if (s[index] >= '0' && s[index] <= '9')
{
number = number * 10 + s[index] - '0';
}
else
{
break;
}
index++;
}
number *= sign;
return (number);
}
