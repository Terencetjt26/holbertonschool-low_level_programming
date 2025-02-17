#include <stdio.h>

/**
 * main - Programme qui affiche l'alphabet sauf 'q' et 'e'
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e')
            putchar(letter);
    }
    putchar('\n');

    return (0);
}
