#include "main.h"
/**
 * print_number - print number
 * @n: number
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int m, d, c;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	c = 1;

	while (d > 9)
	{
		d /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((m / c) % 10) + 48);
	}
}
