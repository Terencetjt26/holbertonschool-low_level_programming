#include "main.h"

/**
* _puts_recursion - Prints a string followed by a new line
* @s: The string to be printed
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')  /* Cas de base : fin de la chaîn*/
	{
		_putchar('\n');  /* Affiche un saut de ligne */
		return;
	}
	_putchar(*s);  /* Affiche le caractère actuel*/
	_puts_recursion(s + 1);  /* Appel récursif avec le caractère suivant*/
}
