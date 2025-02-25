#include "main.h"
#include <stdio.h>

/**
 * main - Test de la fonction _atoi
 *
 * Return: Toujours 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("   ---++--98");
    printf("%d\n", nb);
    nb = _atoi("2147483647");
    printf("%d\n", nb);
    nb = _atoi("-2147483648");
    printf("%d\n", nb);
    nb = _atoi("Hello 1234 World");
    printf("%d\n", nb);
    
    return (0);
}
