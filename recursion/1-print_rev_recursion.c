#include "main.h"

/**
* _print_rev_recursion - Affiche une chaîne de caractères à l'envers.
* @s: Pointeur vers la chaîne de caractères.
*
* Return: Rien (void).
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Condition d'arrêt*/
		return;

	_print_rev_recursion(s + 1); /* Appel récursif avec le caractère suivant */
	_putchar(*s); /* Affichage après l'appel récursif */
}
