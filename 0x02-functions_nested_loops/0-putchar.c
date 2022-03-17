#include <stdio.h>

/**
 * main - print putchar
 *
 * Return: 0
 */
int main(void)
{
	char txt[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(txt[i]);
	}
	putchar('\n');
	return (0);
}
