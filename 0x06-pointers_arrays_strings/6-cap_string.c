#include "main.h"
/**
 * cap_string - capitalizes
 * @i: the string
 * Return: pointer to dest
 */

char *cap_string(char *i)
{
	int c = 0, j;
	int sp[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (*(i + c) >= 97 && *(i + c) <= 122)
		*(i + c) = *(i + c) - 32;
	c++;

	while (*(i + c) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(i + c) == sp[j])
			{
				if ((*(i + (c + 1)) >= 97) && (*(i + (c + 1)) <= 122))
					*(i + (c + 1)) = *(i + (c + 1)) - 32;
				break;
			}
		}
		c++;
	}
	return (i);
}
