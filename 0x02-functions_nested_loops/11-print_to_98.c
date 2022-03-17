#include<stdio.h>

/**
 * print_to_98 - prints natural numbers to 98.
 * @n: number to start from.
 *
 * Return: 0.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
