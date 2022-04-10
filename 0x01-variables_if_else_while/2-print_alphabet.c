#include <stdio.h>
#include <stdlib.h>
/**
 *  main - main block
 *  Description: program that prints the alphabet in lowercase, followed by a new line
 *  Return: 0
 */
int main(void)
{
	char q = 'a';
	while (q <= 'z')
	{
		putchar(q);
		q++;
	}
	putchar('\n');
	return (0);
}
