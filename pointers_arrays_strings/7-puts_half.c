#include "main.h"
#include <stdio.h>

/**
 * puts_half - Affiche la seconde moitié d'une chaîne de caractères.
 * @str: La chaîne de caractères en entrée.
 */
void puts_half(char *str)
{
	int length = 0, n, i;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2 + 1;

	for (i = n; i < length; i++)
		putchar(str[i]);
	putchar('\n');
}
