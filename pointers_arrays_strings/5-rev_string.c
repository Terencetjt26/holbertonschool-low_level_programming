#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 */
void rev_string(char *s)
{
	int i, len = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];             /* Sauvegarde le caractère actuel */
		s[i] = s[len - 1 - i];   /* Remplace avec le caractère opposé */
		s[len - 1 - i] = temp;   /* Met l'ancien caractère en fin */
	}
}
