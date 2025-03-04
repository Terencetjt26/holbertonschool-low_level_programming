#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse using recursion.
* @s: The string to be printed in reverse.
*/
void _print_rev_recursion(char *s)
{
	if (*s)  /* Vérifie si nous ne sommes pas à la fin de la chaî */
	{
		_print_rev_recursion(s + 1); /* Appel récursif avec le caractère suivant */
		_putchar(*s); /* Affiche le caractère après que l'appel récursif soit terminé */
	}
}
