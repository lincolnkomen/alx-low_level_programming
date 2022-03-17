#inlcude "main.h"
#include <unistd.h>
/**
 * main - prints to output
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
