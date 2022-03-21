#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: nothing
 */

void rev_string(char *s)
{
	int counter = 0, i, j;
	char *str, temp;

	while (counter >= 0)
	{
		if (s[counter] == '\0')
			break;
		counter++;
	}
	str = s;

	for (i = 0; i < (counter - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
