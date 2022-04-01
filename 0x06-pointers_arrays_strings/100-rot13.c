#include "main.h"
/**
 * rot13 - encode string in rot13
 * @s: input string
 * Return: pointer to dest
 */

char *rot13(char *s)
{
	int c = 0, i;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + c) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + c) == alph[i])
			{
				*(s + c) = rot13[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
