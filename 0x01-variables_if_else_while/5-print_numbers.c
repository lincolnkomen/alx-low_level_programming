#include <stdio.h>
/**
 * main - main block
 * Description: Program that prints single digits numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
