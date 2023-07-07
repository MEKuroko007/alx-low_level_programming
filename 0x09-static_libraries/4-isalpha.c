#include "main.h"

/**
 * _isalpha - function for alphabetic character
 * @ch : is the char to be chicked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int ch)
{
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}
