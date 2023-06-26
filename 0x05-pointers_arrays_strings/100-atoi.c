#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: char
 *
 * Return: an integer
 */
int _atoi(char *s)
{
int index = 0;
unsigned int number = 0;
int sign = 1;
int is = 0;

while (s[index])
{
if (s[index] == 45)
{
sign *= -1;
}

while (s[index] >= 48 && s[index] <= 57)
{
is = 1;
number = (number * 10) + (s[index] - '0');
index++;
}

if (is == 1)
{
break;
}

index++;
}

number *= sign;
return (number);
}
