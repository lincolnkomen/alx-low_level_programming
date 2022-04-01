#include "main.h"
/**
 * string_toupper - makes uppercase
 * @i: string input
 * Return: pointer to destination
 */

char *string_toupper(char *i)
{
	int n = 0;

	while (*(i + n) != '\0')
	{
		if ((*(i + n) >= 97) && (*(i + n) <= 122))
			*(i + n) = *(i + n) - 32;
		n++;
	}
	return (i);
}
