#include <unistd.h>
#include <sys/syscall.h>
/**
 *  main - Entry point
 *
 *  Return: Always 1 (Success)
 */
int main(void)
{
	const char quest[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	syscall(SYS_write, 1, quest, sizeof(quest));
	return 1;
}
