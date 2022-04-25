#include "main.h"

/**
 * _strlen - calculates string length
 * @s: string location pointer
 * Return: String length
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j])
		j++;

	return (j);
}
