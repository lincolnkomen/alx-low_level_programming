#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 'z';

	while(i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
