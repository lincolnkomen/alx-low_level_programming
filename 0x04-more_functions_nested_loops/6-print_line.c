#include "main.h"

/**
 * print_line - print a line character
 * @n: length of line input
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
