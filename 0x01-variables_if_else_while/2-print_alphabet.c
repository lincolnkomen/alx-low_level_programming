#include <stdio.h>
#include <stdlib.h>
/**
 *  main - main block
 *  Description: program that prints the alphabet in lowercase, followed by a new line
 *  Return: 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
