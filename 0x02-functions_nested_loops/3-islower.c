#include "main.h"

/**
 * _islower - checks whether is lower or not
 *@c: Ascii code character
 *
 * Return: 0 if it is not, 1 if it is lower.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
