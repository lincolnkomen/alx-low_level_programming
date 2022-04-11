#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Program that prints single digits numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
        int i = '0';

        while (i <= '10')
        {
                printf("%c\n", i++);
        }
        return (0);
}
