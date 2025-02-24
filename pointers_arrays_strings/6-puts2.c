#include "main.h"

/**
 * puts2 - Affiche un caractère sur deux d'une chaîne.
 * @str: Pointeur vers la chaîne de caractères.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
