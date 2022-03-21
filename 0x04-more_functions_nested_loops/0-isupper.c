#include "main.h"

/**
 * _isupper - determines whether a character is upper or lower case.
 * @c: character input
 * Return: 1 if upper, 0 if lower.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
