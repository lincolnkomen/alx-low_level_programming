#include <stdio.h>
#include <stdlib.h>
#include <sys/syscall.h>
/**
 * main - print putchar
 *
 * Return: 0
 */
int main(void)
{
	const char putchar_[] = "putchar_";
	syscall(SYS_write, 1, putchar_, sizeof(putchar_));
	return (0);
}
