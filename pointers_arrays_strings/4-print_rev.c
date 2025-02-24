#include "main.h"

/**
 * print_rev - Affiche une chaîne de caractères en ordre inverse.
 * @s: Pointeur vers la chaîne de caractères.
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')  /* Trouver la longueur de la chaîne */
	{
		len++;
	}

	for (len--; len >= 0; len--) /* Afficher la chaîne en ordre inverse */
	{
		_putchar(s[len]);
	}

	_putchar('\n'); /* Ajouter un saut de ligne */
}
