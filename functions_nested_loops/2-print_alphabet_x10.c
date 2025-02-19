#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz\n";
    int i;

    for (i = 0; i < 10; i++)  // Loop to print 10 times
    {
        char *ptr = alphabet;
        while (*ptr)
        {
            _putchar(*ptr++);
        }
    }
}
