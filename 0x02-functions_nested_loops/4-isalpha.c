#include "main.h"
/**
 * _isalpha - returns 1 if the input is a letter(lower & upper)cases and 0 if otherwise
 * @c: The characters are represented in ASCII code
 * Return: 1 for letters & 0 for st else.
 */
int _isalpha(int c)
{
	if((c >= 65 && c < 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
