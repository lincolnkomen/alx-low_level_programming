#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int a, b1, b2;
	long int n1, n2, fn, fn2, n11, n22;

	n1 = 1;
	n2 = 2;
	b1 = b2 = 1;
	printf("%ld, %ld", n1, n2);
	for (a = 0; a < 96; a++)
	{
		if (b1)
		{
			fn = n1 + n2;
			printf(", %ld", fn);
			n1 = n2;
			n2 = fn;
		}
		else
		{
			if (b2)
			{
				n11 = n1 % 1000000000;
				n22 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				b2 = 0;
			}
			fn2 = (n11 + n22);
			fn = n1 + n2 + (fn2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fn2 % 1000000000);
			n1 = n2;
			n11 = n22;
			n2 = fn;
			n22 = (fn2 % 1000000000);
		}
		if (((n1 + n2) < 0) && b1 == 1)
			b1 = 0;
	}
	printf("\n");
	return (0);
}
