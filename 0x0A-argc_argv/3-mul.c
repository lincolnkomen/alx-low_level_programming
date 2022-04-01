#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints product of two numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 0 if okay, 1 if error input
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
