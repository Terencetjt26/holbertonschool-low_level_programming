#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Trouver la fin de la chaîne dest */
	while (*ptr)
		ptr++;

	/* Copier src à la fin de dest */
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Ajouter le caractère nul de fin */
	*ptr = '\0';

	return dest;
}
