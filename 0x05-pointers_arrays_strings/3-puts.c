#include "main.h"

/**
 * _puts - prints string
 * @str: pointer to the string
 * Return: nothing
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
