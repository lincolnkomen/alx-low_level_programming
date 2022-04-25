#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string
 * @dest: destination
 * @src: the string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (counter >= 0)
	{
		*(dest + counter) = *(src + counter);
		if (*(src + counter) == '\0')
			break;
		counter++;
	}
	return (dest);
}
