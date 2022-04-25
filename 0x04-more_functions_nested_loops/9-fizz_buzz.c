#include <stdio.h>

/**
 * main - print 1 to 100 with fizzbuzz
 * Return: 0
 */

int main(void)
{
	int j;

	j = 1;
	printf("%d", j);
	for (j = 2; j <= 100; j++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", i);
		}
	}
}
