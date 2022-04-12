/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
    int i, j = '0';

    while(j < 10)
    {
        i = 'a';
        while(i <= 'z')
        {
            putchar(i);
            i++;
        }
        putchar("\n");
        j++;
    }
}
