#include "main.h"

void print_alphabet_x10(void)
{
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz\n";
    int i;

    for (i = 0; i < 10; i++)
    {
        char *ptr = alphabet;
        while (*ptr)
        {
            _putchar(*ptr++);
        }
    }
}
