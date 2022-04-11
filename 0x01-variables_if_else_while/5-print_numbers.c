#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Program that prints single digits numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	char i = '0';

	while (i <= '10')
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
