#include "main.h"
/**
 * _strchr - locates a character
 * @s: the string
 * @c: the character
 * Return: pointer to the character
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
