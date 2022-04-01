#include "main.h"
/**
 * reverse_array - reverses contents of array
 * @a: array
 * @n: size
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0; x < n - 1; x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			z = *(a + y);
			*(a + y) = *(a + (y - 1));
			*(a + (y - 1)) = z;
		}
	}
}
