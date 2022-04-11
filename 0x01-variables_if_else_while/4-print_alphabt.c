#include <stdio.h>
/**
 * main - main bock
 * Description: Print all letters except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char g = 'a';

	while (g <= 'z')
	{
		if (g != 'q' && g != 'e')
		{
			putchar(g);
		}
			g++;
	}
	putchar('\n');
	return (0);
}
