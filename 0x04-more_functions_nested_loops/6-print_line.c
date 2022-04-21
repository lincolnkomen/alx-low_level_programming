#include "main.h"

/**
 * print_line - print a line character
 * @n: length of line input
 * Return: nothing
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
