#include "main.h"
/**
 * leet - encode 1337 cypher
 * @s: input string
 * Return: pointer to dest
 */

char *leet(char *s)
{
	int c = 0, i;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + c) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + c) == lower[i] || *(s + c) == upper[i])
			{
				*(s + c) = num[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
