#include "main.h"

/**
 * _isdigit - determines whether it's a digit or not
 * @c: input character
 * Return: 1 if it's a digit, 0 if not.
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
