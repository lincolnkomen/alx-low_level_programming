#include "main.h"
#include <stdio.h>

/**
 * print_array - print array to n
 * @a: the array
 * @n: number to count to
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
