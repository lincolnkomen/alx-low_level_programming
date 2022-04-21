#include "main.h"

/**
 * print_line - print a line character
 * @n: length of line input
 * Return: nothing
 */

void print_line(int n)
{
	int c = 0;

	while (c < n && n > 0)
	{
		_putchar(95);
		c++;
	}
	_putchar('\n');
}
